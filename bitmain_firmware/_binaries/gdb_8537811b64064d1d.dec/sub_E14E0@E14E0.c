void __fastcall sub_E14E0(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  const char *v4; // r6
  const char *v5; // r0

  v2 = a1[63];
  if ( v2 )
  {
    if ( dword_487D4C )
    {
      v3 = *(_DWORD *)sub_242FF0(v2);
      v4 = (const char *)sub_240150(a1);
      v5 = (const char *)sub_230984(a1[2], a1[3], a1[4]);
      sub_2594D8(v3, "[btrace] teardown thread %s (%s)\n", v4, v5);
    }
    sub_232600();
    a1[63] = 0;
    sub_E13A0((int)a1);
  }
}
