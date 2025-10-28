int __fastcall sub_4ADB0(int a1)
{
  int v2; // r0

  v2 = bitmain_set_voltage();
  if ( v2 < 0 )
    return sub_4AC28(v2);
  usleep(0x7A120u);
  dword_166360 = a1;
  dword_166364 = a1;
  return 0;
}
