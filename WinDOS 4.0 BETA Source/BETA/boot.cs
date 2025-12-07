using System;
using System.Diagnostics;

namespace exit
{
    class exit
    {
        static void Main()
        {
             
            Console.WriteLine("Select a number: \n");
            Console.WriteLine("1. Exit in WinDOS\n");
            Console.WriteLine("2. Restart WinDOS\n");
            Console.WriteLine("3. Turn off your PC\n");
            Console.WriteLine("4. Restart your PC\n");
            int exit = Convert.ToInt32(Console.ReadLine());
            

            switch (exit){
                case 1:

                   System.Diagnostics.Process.Start(@".\BOOT\exitDOS.bat");

                   break;
                case 2:

                   Process.Start(@".\BOOT\restartDOS.bat");
                   break;
                case 3:

                   Process.Start(@".\BOOT\exitSYS.bat");
                   break;
                case 4:

                   Process.Start(@".\BOOT\restartSYS.bat");
                  break;
            }


            
        }
    }
}