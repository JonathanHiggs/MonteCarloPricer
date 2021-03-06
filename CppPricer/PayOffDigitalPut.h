#pragma once


#include "PayOff.h"


namespace Pricer {
	namespace Instrument {
		class PayOffDigitalPut : public PayOff
		{
		public:
			PayOffDigitalPut(double strike);
			virtual double operator() (double spot) const;
			virtual ~PayOffDigitalPut() {};

			virtual PayOffDigitalPut* Clone() const;

		private:
			double Strike;
		};
	}
}