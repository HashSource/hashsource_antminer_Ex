int __fastcall sub_1EAB34(int a1, int a2)
{
  int v3; // r0
  const char **v4; // r4
  int v5; // r0
  char *v6; // r7
  size_t v7; // r0
  int v8; // r0
  int result; // r0
  char v10[44]; // [sp+8h] [bp-2Ch] BYREF

  v3 = sub_16F67C(a1);
  ((void (__fastcall *)(int))loc_1E2798)(v3);
  v4 = (const char **)dword_488C94;
  v5 = sprintf(v10, "%08lx", *(_DWORD *)(a2 + 52));
  v6 = (char *)*v4;
  v7 = sub_1E28B8(v5);
  sub_93198(v6, v7, "QTDisable:%x:%s", *(_DWORD *)(*(_DWORD *)(a2 + 16) + 24), v10);
  v8 = sub_1E7E14(*v4);
  sub_1E9910(v8);
  if ( !**v4 )
    sub_94708("Target does not support disabling tracepoints while a trace run is ongoing.");
  result = strcmp(*v4, "OK");
  if ( result )
    sub_94708("Error on target while disabling tracepoint.");
  return result;
}
