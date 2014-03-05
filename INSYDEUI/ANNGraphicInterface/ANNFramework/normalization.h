#ifndef NORMALIZATION_H
#define NORMALIZATION_H

#include <math.h>

class Normalization
{
	public:
		enum NormalizationType{
			Nothing,
			BipolarFixedThreshold,
			BipolarAutoThreshold,
			UnipolarFixedThreshold,
			UnipolarAutoThreshold,
			LinearFixedRange,
			LinearAutoRange,
			Tanh,
			Sigmoid
		};

		explicit Normalization();

		explicit Normalization(NormalizationType nt, double max, double min, double threshold);

		void setNormalization(NormalizationType nt);
		NormalizationType getNormalization() const;

		void setMaxValue(double max);
		double getMaxValue() const;

		void setMinValue(double min);
		double getMinValue() const;

		void setThreshold(double threshold);
		double getThreshold() const;

		Normalization operator=(const Normalization &nor);
		bool operator==(const Normalization &param1);
		bool operator!=(const Normalization &param1);

	private:

//		double *curMinValue;
//		double *curMaxValue;
//		double *curAutoThreshold;
		double maxValue;
		double minValue;
		double threshold;
		NormalizationType norType;
};

#endif // NORMALIZATION_H
