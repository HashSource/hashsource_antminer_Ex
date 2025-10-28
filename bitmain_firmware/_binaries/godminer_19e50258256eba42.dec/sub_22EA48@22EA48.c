int __fastcall sub_22EA48(void *a1)
{
  int i; // [sp+Ch] [bp-8h]

  memset(a1, 0, 0xB5u);
  for ( i = 0; i <= 7; ++i )
    *((_DWORD *)a1 + i) = dword_57D470[i];
  return 0;
}
