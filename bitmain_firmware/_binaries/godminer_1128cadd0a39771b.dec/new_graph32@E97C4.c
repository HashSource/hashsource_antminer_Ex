_DWORD *__fastcall new_graph32(int a1, int a2)
{
  _DWORD *v4; // r4

  v4 = calloc(1u, 0x78u);
  if ( !v4 )
    puts("graph calloc failed!");
  v4[24] = sub_E9664;
  v4[25] = sub_E9604;
  v4[29] = sub_E92D8;
  v4[27] = sub_E95C4;
  v4[26] = sub_E9510;
  v4[28] = sub_E9334;
  sub_E9664((int)v4, a1, a2);
  return v4;
}
