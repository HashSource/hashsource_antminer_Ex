unsigned int __fastcall pipe_pop(_DWORD *a1, char *a2, int a3)
{
  size_t v7; // [sp+10h] [bp-14h]
  unsigned int v8; // [sp+14h] [bp-10h]
  unsigned int v9; // [sp+18h] [bp-Ch]
  size_t v10; // [sp+1Ch] [bp-8h]

  v8 = sub_34231C((int)a1);
  v10 = v8 * a3;
  v9 = 0;
  do
  {
    v7 = sub_343A84(a1, a2, v10);
    a2 += v7;
    v9 += v7;
    v10 -= v7;
  }
  while ( v7 && v10 );
  return v9 / v8;
}
