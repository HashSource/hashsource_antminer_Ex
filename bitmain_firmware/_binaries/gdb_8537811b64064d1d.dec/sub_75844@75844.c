int __fastcall sub_75844(int a1, int a2, int a3)
{
  const char *v4; // r3

  v4 = (&off_361CD4)[a2];
  if ( a2 <= 88 )
  {
    sub_1C4D68(a1, "%s %s (", "token", v4);
    if ( a3 )
      sub_75568(
        a1,
        word_361F00[a2],
        *(_DWORD *)a3,
        *(const void **)(a3 + 4),
        *(_DWORD *)(a3 + 8),
        *(_DWORD *)(a3 + 12),
        *(_DWORD *)(a3 + 16));
  }
  else
  {
    sub_1C4D68(a1, "%s %s (", "nterm", v4);
  }
  return sub_1C4D68(a1, ")");
}
