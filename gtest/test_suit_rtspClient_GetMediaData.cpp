//   Copyright 2015 Ansersion
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.
//

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <regex.h>
#include <memory.h>
#include <stdlib.h>
#include <string>
#include <list>
#include <iostream>
#include <gtest/gtest.h>
#include <fcntl.h>

#include "myRegex.h"
#include "rtspClient.h"
using namespace std;

// TEST(rtspClient, TMP_TEST)
// {
// 	string RtspUri("rtsp://127.0.0.1/ansersion");
//     RtspClient Client(RtspUri);
// 
// 	EXPECT_EQ(Client.DoOPTIONS(), RTSP_NO_ERROR);
// 	printf("%s\n", Client.GetResponse().c_str());
// 	EXPECT_TRUE(Client.IsResponse_200_OK());
// 
// 	EXPECT_EQ(Client.DoDESCRIBE(), RTSP_NO_ERROR);
// 	printf("%s\n", Client.GetResponse().c_str());
// 	EXPECT_TRUE(Client.IsResponse_200_OK());
// 
// 	EXPECT_EQ(Client.ParseSDP(), RTSP_NO_ERROR);
// 
// 	EXPECT_EQ(Client.DoSETUP(), RTSP_NO_ERROR);
// 	printf("%s\n", Client.GetResponse().c_str());
// 	EXPECT_TRUE(Client.IsResponse_200_OK());
// 
// 	printf("start PLAY\n");
// 	EXPECT_EQ(Client.DoPLAY("video"), RTSP_NO_ERROR);
// 	EXPECT_TRUE(Client.IsResponse_200_OK());
// 
// 	int packet_num = 0;
// 	int fd;
// 	printf("*******************\n");
// 	while(++packet_num < 1000) {
// 		uint8_t buf[4192];
// 		size_t size = 0;
// 		// usleep(30000);
// 		Client.GetMediaData("video", buf, &size);
// 		write(1, buf, size);
// 		// printf("recv %lu\n", size);
// 	}
// 
// 	printf("start TEARDOWN\n");
// 	EXPECT_EQ(Client.DoTEARDOWN("video"), RTSP_NO_ERROR);
// }
