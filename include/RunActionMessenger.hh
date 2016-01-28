#ifndef RunActionMessenger_h
#define RunActionMessenger_h 1

#include "globals.hh"
#include "G4UImessenger.hh"

class RunAction;
class G4UIdirectory;
class G4UIcmdWithADoubleAndUnit;
class G4UIcmdWithAString;
class G4UIcmdWithAnInteger;
class G4UIcmdWithABool;
class G4UIcmdWithoutParameter;

class RunActionMessenger: public G4UImessenger
{
public:
  RunActionMessenger(RunAction*);
  ~RunActionMessenger();

  void SetNewValue(G4UIcommand*, G4String);

private:
  RunAction* RunActionPtr;

  G4UIdirectory* runActionDir;
  G4UIcmdWithoutParameter* UpdateCmd;
  G4UIcmdWithAString* outputFileCmd;
};
#endif
