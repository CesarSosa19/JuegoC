#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main()
{
    // variables
    char nombreJugador[21];
    // Pantalla inicial
    // Logo "El Reino en Ruinas"
    printf("\
                                                                                                                                          \n \
8888888888 888     8888888b           d8b                                              8888888b            d8b                            \n \
888        888     888   Y88b          Y8P                                             888   Y88b          Y8P                            \n \
888        888     888    888                                                          888    888                                         \n \
8888888    888     888   d88P   d88b   888 88888b     d88b         d88b   88888b       888   d88P 888  888 888 88888b    8888b    d8888b  \n \
888        888     8888888P   d8P  Y8b 888 888  88b d88  88b     d8P  Y8b 888  88b     8888888P   888  888 888 888  88b     i88b 88K      \n \
888        888     888 T88b   88888888 888 888  888 888  888     88888888 888  888     888 T88b   888  888 888 888  888  d888888  Y8888b  \n \
888        888     888  T88b  Y8b      888 888  888 Y88  88P     Y8b      888  888     888  T88b  Y88b 888 888 888  888 888  888      X88 \n \
8888888888 888     888   T88b   Y8888  888 888  888   Y88P         Y8888  888  888     888   T88b   Y88888 888 888  888  Y888888  88888P  \n \
\n \
\n");
    printf("\n Por:");
    printf("\n Cesar Uriel Sosa Alvarez");
    printf("\n Presione Enter para continuar");
    printf("\n");
    getch();
    system("cls");

    printf(" \
MMMMMMMMMMMMMMMMMMMMMMMMMWWMMMMMMMMMMMMMMMMMWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n \
MMMWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKkx0WMMMMMMMMMMMMMMWWMMMMMMMMMMMMMMMMMMWMM\n \
MMWNNMMMMMMMMMMMMMMMWWMMMMMMMMMMMMMWKk:..;kKWMMMMMMMMMMMMNNWMMMMMMMMMMMMMMMWWMMM\n \
MMMWMMMMMMMMMMMMMMWWMMMMMMMMMMMMMWXk;..,,'.;kXWMMMMMMMMMMMWMMMMMMMMMMMMMWWMMMMMM\n \
MMMMMMMMMMMMMMMMWMMMMMMMMMMMMMMMMO,..'',,,,'.'kMMMMMMMMMMMMMMMMMMMMMMMMWMMMMMMMM\n \
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWk. .,,,,;;' .xMMMMMMMMMMMMMMMMMMMWWMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWx;,..',,;;;;,'',;kWMMMMMMMMMMMMMMMWNNWMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMOcdNMMMMMMMMMNxc,..',,;;;;;;;;;'.,cxNMMMMMMMMMNxcOMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMWOo;.'cdKMMMMMXxl,..,,,;;;;;;;;;;;;;'.,lxXMMMMMXxo:.;okWMMMMMMMMMMMM\n \
MMMWWMMMMMMMN: .,' .kWWMMMO. ':;,;ccll:;;:ccll:;:c, .OMMMMMO'.',. ;XMMMMMMMMMMMM\n \
MMWNNMMMMMN0x; .,'..lx0WMMO' :xocldxkkoccldxkkocox: .OMWMXOo..',..;x0NMMMMMMMMMM\n \
MMMMMMMMMM0, .'',,;,. oWMM0:.:ldkkxxxxkkkkxxxkOOxl:':0WWWd..',,;;;' '0MMMMMMMMMM\n \
MMMMMMMMWNk' .',,;;,. lXNMWN0: ;xkkOO0OkkkkOKXXXc ;0NWWNXl..',;;;;' 'kNWMMMMMMMM\n \
MMMMMMWWk,...'',,;;;,,''oXWMX; ,xkkO000KKKKKXXXXc ;XWWNo.''',;;;;;;,,',kWWMMMMMM\n \
MMMMMWx,,;::ccccllodddooc,cKX; ,xkOkl;:::::o0NXXc ;XKl,;;:cllloddddddol:,xWMMMMM\n \
MMMMMM0dc'':ccloddkkOOl,:dkNX; 'odxo,......;0NXXc ;XNko;.,lllodxxkxkd:,ld0WMMMMM\n \
MMMMMMMMx..:loodxxxx00; :XMMX; 'dxxd,......;0NXXc ;XMMN: .looodxxkkOo..xMMMMMMMW\n \
MMMMWWMMx..cdlcclodxO0c :XMMX; ,xkOx;......;0NXXc ;XMMN: 'odddlclld0x..xMMMMMWMM\n \
MMWWMMMMx..cd;...;xO00: :XNOx:'cxkOkl::ccc:oOKKKo':xONN: .odxo,...:0x..xMMWWMMMM\n \
WMMMMMMMx..cd;...;dk00c.;kx;'oOkxkkO00KXXXXK0OOOOOo',dk:.,odxo;...:0x..kMWMMMMMM\n \
MMMMMMMMx..cd;''';ldO0xl:.,okkkkxkkkO0KXXXKKKKKX0kkko,.;loddxd;'''c0x..kMMMMMMMM\n \
MMMMMMMMx..cdlclloxk00xoddddddddxxdddxO00OxxxxO0kxxdddddoooddxdoolx0x..xMMMMMMMM\n \
MMMMMMMMx..cdoddxxkO00xodddxxxxdddkkOOkxdkOOOOxxkOOOkxddoodddxxxkkO0x..xMMMMMMMM\n \
MMMMMMMMx..cddxdooooO0xoddxxxxxxxkkO00OkkO0000OO00000OkdoddddxkkkOOKx..xMMMMMMMM\n \
MMMMMMMMx..cddxddddxO0kddddddxxkOOOO0000000000OkkkO0000xoolodxkkkOOKx..xMMMMMMMM\n \
MMMMMMMMx..cddxxkkkO00kdoooddxxxxkOkxxxxdxxk00OkkkO0000xooodddxkkOOKx..xMMMWWWMM\n \
MMMMMMMMx..cddxxkkO000koddxxxxxxxddoc::::cloxkO00000000kxxxdxxxkkOOKx..xMMWNNWMM\n \
MMMMMMMMx..cddxxkOOO00xodddxxxxkkd:;:::::cllllk00000000kddddxxxkkOOKx..xMMMMMMMM\n \
MMMMMMMMx..cdddxkkkO00xoddxxxxxxxo:;:::::cllclk000Okk00xodddxxxkkkk0d..xMMMMMMMM\n \
MMMMMMMMx. ;ccldkkkO00xoddxxxxxxkd:;;::::cccclk00000000xodddxxxkxdddc..xMMMMMMMM\n \
MMMMMMMMx..:oodxkkkO00xodddxxxxxOd;,;::::cccclk00000000xoodddxxkkkkOd..xMMMMMMMM\n \
MMMMMMMMx..cddxxkkkO00xooodddxxkOd;,;:::::ccclk000OkkkkdoollooxkkOO0x..xMMMMMMMM\n \
MMMMMMMMx..cxxxxkkOO00kdxxxxxxkkOd:,;::;;:ccclkKKK0OOOOxoollddxkkOOKx..xMMMMMMMM\n \
MMWNWMMMx. .,,,;;;;:cl:;;;;;;;;;;,........''.';::::::::;,,'',;;;;;::,..xMMMMMMMM\n \
MMWNWMMM0l::::::::clllc:::::::::::::::::c:::::::::::::::::c:::::::::::c0MMMMMMMM\n \
MMMMMMMMMMMMMMMMWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWMMMMMMMMMMMMMMMMMMMMMMMMMM\n \
NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN\n");

    printf("\nEn un mundo mágico en decadencia, el Reino de Eldoria, que una vez fue el epítome de la ");
    printf("\nprosperidad y la magia, se encuentra al borde del colapso. Siglos atrás, Eldoria era un lugar");
    printf("\ndonde la magia fluía libremente y la paz reinaba. Sin embargo, la codicia, la guerra y la ");
    printf("\ncorrupción han despojado al reino de su esplendor. La magia se ha desvanecido ");
    printf("\nmisteriosamente, y el reino está plagado de monstruos y desesperación.");
    getch();
    system("cls");

    printf("\nEn una aldea destrozada en las afueras de Eldoria existia un joven llamado: ");
    gets(nombreJugador);
    getch();
    system("cls");

    printf("\
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWMMWWMWWWWWNKOkOKXNWWMMWWWWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWMWWMMWNXNWMMWMMWXkddOKXNWWWMWWWWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWMWXd:;ckNMMWWWNOxONWWWMWWWWWMWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWWWWWWWWWWWWMMWMMWMWN0:.....lKNOlcoc:kWMMWMMWWWWWWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWWWWWWWWWWWMMWWMWWKd:'..... .':,.','.oNMWWWWWWWWMWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWWWMWWWWMWWWWWWNkl,........     .,,,'oNMWMMWWWWWMWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWWWWWWWWMWWMN0d:...........     .,,,'oNMWWWWWWWWWWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWWWWMWWMWWKxc'............      .'''.'lkXWWWWWMWWWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWMMWWMW0dc,........... ....      ....  .,lxKWMMWWWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWWMMWMXl...........   .',;,..             .dWMMMWWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWMWWMWWXc.........  ..',;,,;,,'.           .dWMMWWMWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWMWWWWMXc....... ..',,,,,,,;;;;,'..        .dNMWWWWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWWMMMWKc.... ...',,,;;;;,,,;;;,;;,..      .oNMMWWWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWMWWMWWK:.  ...,,;;,,,;;,,',;;;,,,,,,'..   .oNMMMMWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWWMMWWWKo,,:;'.;cc,.,:c;..':c:'.;c:,.'::';kXWMMWMWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWWWWWMMMKlcooccloolcloolc:coooccloolcloo:dNMWMMWWWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWWWWWWMMKc:ooooooolclllllllllllclooooooo:oNMWWWMWWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWWWWWWMMKccl:,,;lo:'''..'''..'',coc;,,:l:oNMWWWMMWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWWWWMMMMKl:;....,lc'...... ....,lc'....::dNMWMMWWWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWWWWWWMMWx:,,;;,,cc'....   ....,c:,;;;,,c0WMWWMWWMWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWWWWWWWWWk;,'',',:;'...........,:;',,',,cKMWWWWWWWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWWWWWWWWWO:;:::;::;............';::::;;;lKMWWMWWWWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWWWWWWWWWNXXXXXXXXKo.....'....,xXXXXXXXXXWMWWMMWWWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWWWWWWWWMMWWWWMWWWMXxc:cllllooONMMWWMWWWWMWWWWWWWWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWMMWKk0NWXOOXWMMMWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");

    printf("\n%s era un joven muy tranquilo, pero inteligente. siempre resaltaba.",nombreJugador);
    printf("\nno tardo en llamar la atencion de un anciano del pueblo, el cual todos lo consideraban una persona loca.");
    printf("\nUn dia en la plaza del pueblo, el anciano llamo a %s", nombreJugador);
    printf("\nAnciano: %s necesito tu ayuda, tengo un plan para que el Reino de Eldoria regrese a su gloria, pero soy muy viejo para llevarlo acabo",nombreJugador);
    printf("\n%s: ¿como puedo ayudarte?", nombreJugador);
    getch();

    printf("\
    \n \
WWWWWWWWWWWWNX0OOOOxdxOO0XX0KNWWWWWWWWWW\n \
WWWWWWWWWWWXOxddooolloollolcok0WWWWWWWWW\n \
WWWWWWWWWNKkddxollloooooolllldONWWWWWWWW\n \
WWWWWWWX0OxdooddoccllllllcclccokKWWWWWWW\n \
WWWWWWN0xxxdoollc:;;;::::::::::ckNWWWWWW\n \
WWWWWWKkdoloolcccc::;;::;;;:clccdKWWWWWW\n \
WWWWWWXOxxdodoc::::;;:::;;;:c:lxOXWWWWWW\n \
WWWWWWWWWWWXXKd:;;;;;ll;lddOOOKNWWWWWWWW\n \
WWWWWWWWWWWWWWNOdc,;clldXWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWX00o,,,,dXWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWNOl::,'''oNWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWN0o:,'..;OWWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWNd,''..oNWWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWWNx:,''.;OWMWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWWNx:;;,'.'lKWWWWWWWWWWWWWW\n \
WWWWWWWWWWWWWWXd;',,,,,,;oXWWWWWWWWWWWWW\n \
WWWWWWWWWWWWNOolol;:okxood0WWWWWWWWWWWWW\n \
WWWWWWWWWWWWKkkKNkd0NWNKKKKNWWWWWWWWWWWW\n \
\n");
    return 0;
}
