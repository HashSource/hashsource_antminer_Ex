int __fastcall sub_233E6C(void *a1)
{
  int i; // [sp+Ch] [bp-8h]

  memset(a1, 0, 0x168u);
  for ( i = 0; i <= 7; ++i )
    *((_QWORD *)a1 + i) = qword_57D548[i];
  return 0;
}
