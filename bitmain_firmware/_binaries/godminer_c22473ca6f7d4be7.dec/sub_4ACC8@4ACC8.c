int __fastcall sub_4ACC8(int a1)
{
  if ( bitmain_set_voltage() < 0 )
    return sub_4AB40();
  usleep(0x7A120u);
  dword_166358 = a1;
  dword_16635C = a1;
  return 0;
}
