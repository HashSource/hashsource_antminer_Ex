_DWORD *__fastcall new_graph29(int a1, int a2)
{
  _DWORD *v4; // r4

  v4 = calloc(1u, 0x78u);
  if ( !v4 )
    puts("graph calloc failed!");
  v4[24] = sub_E7D4C;
  v4[25] = sub_E7CEC;
  v4[29] = sub_E7C28;
  v4[27] = sub_E7BE0;
  v4[26] = sub_E7B58;
  v4[28] = sub_E7984;
  sub_E7D4C((int)v4, a1, a2);
  return v4;
}
