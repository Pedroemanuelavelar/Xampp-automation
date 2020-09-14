#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Automatização do Xampp
    system("cd /opt/lampp/ ; ./manager-linux-x64.run");
    
    sleep(2);
    
    system("apachectl stop");
    system("service mysql stop");

    return 0;
}