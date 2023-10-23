#include <drogon/drogon.h>
#include "TestCtrl.h"

using namespace drogon;
int main()
{
    app().setLogPath("./")
         .setLogLevel(trantor::Logger::kDebug)
         .addListener("0.0.0.0", 8080)
         .setThreadNum(8)
         .run();
}
