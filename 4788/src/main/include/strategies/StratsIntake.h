#include "Intake.h"
#include "strategy/Strategy.h"

using Controllers = wml::controllers::SmartControllerGroup;


class IntakeManualStrategy : public wml::Strategy {
	public:


IntakeManualStrategy(std::string name, Intake &intake, Controllers &contGroup);
void OnUpdate(doubt dt) override;

private:
Intake &_intake;
Controller &_contGroup;

};