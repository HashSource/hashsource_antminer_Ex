int __fastcall sub_5BF34(int a1, const char **a2, int a3)
{
  int v4; // r5
  int v5; // r4
  int v6; // r0

  if ( a3 != 2 )
    sub_94708("Usage: tracepoint-number passcount");
  v4 = strtol(*a2, 0, 10);
  v5 = strtol(a2[1], 0, 10);
  v6 = sub_D1930(v4);
  if ( !v6 )
    sub_94708("Could not find tracepoint %d", v4);
  *(_DWORD *)(v6 + 140) = v5;
  return sub_1B9D78();
}
