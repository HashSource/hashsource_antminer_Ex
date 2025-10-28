int __fastcall sub_C5A38(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r4
  int v4; // r6
  const char *v5; // r1
  int v6; // r2
  const char *v7; // r3
  const char *v8; // r1

  v2 = (_DWORD *)sub_243004(a1);
  v3 = *v2;
  v4 = a1[34];
  if ( a1[5] )
    v5 = "Catchpoint ";
  else
    v5 = "Temporary catchpoint ";
  sub_2573A8(*v2, v5, "Temporary catchpoint ", "Catchpoint ");
  sub_25752C(v3, "bkptno", a1[6]);
  if ( v4 )
  {
    v7 = " (rethrow)";
    v8 = " (catch)";
    if ( v4 != 2 )
      v8 = " (rethrow)";
  }
  else
  {
    v8 = " (throw)";
  }
  return sub_2573A8(v3, v8, v6, v7);
}
