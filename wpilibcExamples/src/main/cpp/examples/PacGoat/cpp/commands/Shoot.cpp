/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/Shoot.h"

#include "Robot.h"
#include "commands/ExtendShooter.h"
#include "commands/OpenClaw.h"
#include "commands/SetCollectionSpeed.h"
#include "commands/WaitForPressure.h"

Shoot::Shoot() {
  AddSequential(new WaitForPressure());
  AddSequential(new SetCollectionSpeed(Collector::kStop));
  AddSequential(new OpenClaw());
  AddSequential(new ExtendShooter());
}
