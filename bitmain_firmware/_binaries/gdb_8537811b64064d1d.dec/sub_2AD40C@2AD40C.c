int __fastcall sub_2AD40C(int a1, int a2)
{
  bool v2; // zf
  const char *v4; // r6
  int v5; // r4
  size_t v6; // r0

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  if ( v2 || (v4 = (const char *)sub_3245CC(a2), sub_2AD7D4(a1, ".gnu_debuglink")) )
  {
    ((void (__fastcall *)(int))loc_2A6C70)(5);
    return 0;
  }
  else
  {
    v5 = sub_2ADC10(a1, ".gnu_debuglink");
    if ( v5 && (v6 = strlen(v4), sub_2ADDE4(a1, v5, ((v6 + 4) & 0xFFFFFFFC) + 4)) )
    {
      *(_DWORD *)(v5 + 64) = 2;
      return v5;
    }
    else
    {
      return 0;
    }
  }
}
