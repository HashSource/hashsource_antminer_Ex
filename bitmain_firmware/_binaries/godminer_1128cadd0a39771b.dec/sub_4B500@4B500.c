int __fastcall sub_4B500(int a1)
{
  int v2; // r0

  v2 = bitmain_set_voltage();
  if ( v2 < 0 )
    return sub_4B378(v2);
  usleep(0x7A120u);
  dword_167370 = a1;
  dword_167374 = a1;
  return 0;
}
