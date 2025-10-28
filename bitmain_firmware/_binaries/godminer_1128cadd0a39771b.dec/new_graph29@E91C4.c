_DWORD *__fastcall new_graph29(int a1, int a2)
{
  _DWORD *v4; // r4

  v4 = calloc(1u, 0x78u);
  if ( !v4 )
    puts("graph calloc failed!");
  v4[24] = sub_E9064;
  v4[25] = sub_E9004;
  v4[29] = sub_E8F40;
  v4[27] = sub_E8EF8;
  v4[26] = sub_E8E70;
  v4[28] = sub_E8C9C;
  sub_E9064((int)v4, a1, a2);
  return v4;
}
