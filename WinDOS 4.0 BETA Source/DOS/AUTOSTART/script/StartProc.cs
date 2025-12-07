using System;
using System.Diagnostics;

namespace StartProc
{
    class StartProc
    {
        static void Main()
        {
            Process.Start("reg", "import \"\\AUTOSTART\\script\\startup.reg\"");
        }
    }
}
