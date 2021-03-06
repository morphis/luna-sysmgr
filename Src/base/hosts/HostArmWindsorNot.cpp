/* @@@LICENSE
*
*      Copyright (c) 2010-2012 Hewlett-Packard Development Company, L.P.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* LICENSE@@@ */




#include "Common.h"

#include "HostArm.h"

class HostArmWindsorNot : public HostArm
{
public:
	HostArmWindsorNot();
	virtual ~HostArmWindsorNot();

	virtual const char* hardwareName() const;

	virtual bool homeButtonWakesUpScreen();
	virtual int getNumberOfSwitches() const;
};

HostArmWindsorNot::HostArmWindsorNot()
{
}

HostArmWindsorNot::~HostArmWindsorNot()
{
}

const char* HostArmWindsorNot::hardwareName() const
{
    switch (m_hwRev) {
        default:
            return "WindsorNot -- unknown revision";
    }
}

bool HostArmWindsorNot::homeButtonWakesUpScreen()
{
	return true;
}

int HostArmWindsorNot::getNumberOfSwitches() const
{
	// Has ringer, Has Headset
	return 2;
}
