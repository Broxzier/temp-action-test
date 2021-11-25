/**
 * Some dummy source code
 */

const uint32_t ParkFileVersion = 1;

void CrashWhenVersionIs50()
{
    if (ParkFileVersion == 50)
    {
        volatile int *w = nullptr;
        *w = 0; // Crash
    }
}
