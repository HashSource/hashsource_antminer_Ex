int __fastcall sub_4FCDC(int a1)
{
  int v2; // r0

  v2 = bitmain_set_voltage();
  if ( v2 < 0 )
    return sub_4FB58(v2);
  usleep(0x7A120u);
  dword_16604C = a1;
  dword_166050 = a1;
  return 0;
}
