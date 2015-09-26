#ifndef LABELEDCOMBOBOX_H
#define LABELEDCOMBOBOX_H

#include "labeledwidget.h"

/*!
 * \class
 *
 * \brief The LabeledComboBox class
 *
 * \author Edixon Vargas <ingedixonvargas@gmail.com>
 * \date 02/02/2015
 */
class Q_DECL_EXPORT LabeledComboBox : public LabeledWidget
{
	public:

		/*!
		 * \brief LabeledComboBox
		 * \param lbl
		 * \param pos
		 * \param parent
		 */
		explicit LabeledComboBox(const QString &lbl = "List", const Position &pos = Left, QWidget *parent = 0);

		/*!
		 * \brief LabeledComboBox
		 * \param lbl
		 * \param list
		 * \param pos
		 * \param parent
		 */
		explicit LabeledComboBox(const QString &lbl, const QStringList &list, const Position &pos = Left, QWidget *parent = 0);

		~LabeledComboBox();

		/*!
		 * \brief setComboBox
		 * \param cb
		 */
		void setComboBox(QComboBox *cb);

		/*!
		 * \brief getComboBox
		 * \return
		 */
		QComboBox *getComboBox() const;

	private:
		Q_OBJECT

		QComboBox *comboBox;

		/*!
		 * \brief init
		 * \param list
		 */
		void init(const QStringList &list);

		/*!
		 * \brief connectCBSignals
		 */
		void connectCBSignals();
};

#endif // LABELEDCOMBOBOX_H