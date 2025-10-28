signed int __fastcall sub_245DE0(int a1)
{
  signed int result; // r0

  result = fwrite(&unk_3EDDF4, 8u, 1u, *(FILE **)(a1 + 4));
  if ( result <= 0 )
    sub_258B2C(*(_DWORD *)(a1 + 8));
  return result;
}
