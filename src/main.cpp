#include "come_out_phase.h"
#include "point_phase.h"
#include "shooter.h"

using std::cout; using std::cin;

int main() 
{
	srand(time(0));
	Die die1;
	Die die2;
	Shooter shooter;
	Roll* roll = shooter.throw_dice(die1,die2);
	int rolled_value = roll->roll_value();
	ComeOutPhase come_out_phase;

	cout<<"Rolled "<<rolled_value;

	while(come_out_phase.get_outcome(roll) == RollOutcome::natural || come_out_phase.get_outcome(roll) == RollOutcome::craps)
	{
		cout<<" roll again\n";
		roll = shooter.throw_dice(die1,die2);
		rolled_value = roll->roll_value();
		cout<<"Rolled "<<rolled_value;
	}
	
	cout<<" Start of point phase\nRoll until rolled value or 7 is rolled";
	roll = shooter.throw_dice(die1,die2);
	rolled_value = roll->roll_value();

	PointPhase point_phase(rolled_value);

	cout<<"\nRolled "<<rolled_value;

	while(point_phase.get_outcome(roll) != RollOutcome::seven_out && point_phase.get_outcome(roll) != RollOutcome::nopoint)
	{
		cout<<" roll again";
		roll = shooter.throw_dice(die1,die2);
		rolled_value = roll->roll_value();
		cout<<"\nRolled "<<rolled_value;
	}
		cout<<"\nEnd of point phase"<<"\n";
		shooter.display_rolled_values();

	return 0;
}