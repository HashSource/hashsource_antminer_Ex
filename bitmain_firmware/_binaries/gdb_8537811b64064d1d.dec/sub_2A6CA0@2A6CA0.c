int __fastcall sub_2A6CA0(int result, unsigned int a2)
{
  dword_48BBD4 = a2;
  dword_48BBD8 = result;
  dword_48BBD0 = 20;
  if ( a2 > 0x13 )
    sub_2A6C18((int)"bfd.c", 540, (int)"bfd_set_input_error");
  return result;
}
