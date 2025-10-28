int __fastcall power_off_hal(int a1)
{
  int v1; // r3

  LOWORD(v1) = -10948;
  HIWORD(v1) = (unsigned int)&unk_16C33C >> 16;
  pic1704_enable_disable_dc_dc(*(_BYTE *)(v1 + 8 * a1), 0);
  usleep(0x493E0u);
  return 0;
}
