#ifndef ZOOMCONTROL_H
#define ZOOMCONTROL_H

#include <QtWidgets>
#include "icons.h"

/*!
 * \class
 *
 * \brief The ZoomControl class
 *
 * \author Edixon Vargas <ingedixonvargas@gmail.com>
 * \date 02/02/2015
 */
class Q_DECL_EXPORT ZoomControl : public QToolBar
{
	public:

		explicit ZoomControl(QWidget *parent = 0);

		~ZoomControl();

		void setMinZoom(int min);
		int getMinZoom() const;

		void setMaxZoom(int max);
		int getMaxZoom() const;

		void setZoomRange(int min, int max);

		void setZoom(int percentaje);

		int getZoom() const;

	signals:

		void zoomChanged(int zoom);

	private slots:
		void onEditZoomChanged(int val);

	private:
		Q_OBJECT

		QToolButton
		*btnZoomIn,
		*btnZoomOut;

		QSpinBox *sbZoom;

		void init();
};

#endif // ZOOMCONTROL_H