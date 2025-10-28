int __fastcall sub_15944(int a1, int a2, int a3)
{
  int v6; // r4

  v6 = sub_191AF8();
  sub_256878(a1, *(_DWORD *)(v6 + 36));
  sub_256878("^error,msg=\"", *(_DWORD *)(v6 + 36));
  if ( a3 )
    sub_258FA0(a3, 34, *(_DWORD *)(v6 + 36));
  else
    sub_256878("unknown error", *(_DWORD *)(v6 + 36));
  sub_256878("\"", *(_DWORD *)(v6 + 36));
  if ( a2 == 13 )
    sub_256878(",code=\"undefined-command\"", *(_DWORD *)(v6 + 36));
  return sub_256878(&word_356660, *(_DWORD *)(v6 + 36));
}
