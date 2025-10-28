_DWORD *__fastcall new_graph32(int a1, int a2)
{
  _DWORD *v4; // r4

  v4 = calloc(1u, 0x78u);
  if ( !v4 )
    puts("graph calloc failed!");
  v4[24] = sub_E805C;
  v4[25] = sub_E7FFC;
  v4[29] = sub_E7CD0;
  v4[27] = sub_E7FBC;
  v4[26] = sub_E7F08;
  v4[28] = sub_E7D2C;
  sub_E805C((int)v4, a1, a2);
  return v4;
}
