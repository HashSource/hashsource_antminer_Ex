int __fastcall pipe_push(_DWORD *a1, char *a2, int a3, _BYTE *a4)
{
  int v4; // r0

  v4 = sub_34231C((int)a1);
  return _pipe_push(a1, a2, v4 * a3, a4);
}
