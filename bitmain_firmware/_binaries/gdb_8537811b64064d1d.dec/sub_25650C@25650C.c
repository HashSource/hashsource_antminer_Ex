int __fastcall sub_25650C(int a1, int a2, unsigned int a3)
{
  if ( 0x7FFFFFFF - *(_DWORD *)(a1 + 8) < a3 )
    sub_33D1AC("basic_string::append");
  return sub_349298(a1 + 4, a2, a3);
}
