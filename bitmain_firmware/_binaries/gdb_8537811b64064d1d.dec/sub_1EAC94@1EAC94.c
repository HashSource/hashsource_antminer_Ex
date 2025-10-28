int __fastcall sub_1EAC94(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  const char **v5; // r6
  char *v6; // r7
  size_t v7; // r5
  int v8; // r8
  int v9; // r3
  char *v10; // r0
  size_t v11; // r7
  size_t v12; // r0
  char *v13; // r5
  const char *v14; // r4
  size_t v15; // r0
  int v16; // r0
  int result; // r0

  v3 = sub_16F67C(a1);
  v4 = ((int (__fastcall *)(int))loc_1E2798)(v3);
  v5 = (const char **)dword_488C94;
  v6 = *(char **)dword_488C94;
  v7 = sub_1E28B8(v4);
  v8 = *(_DWORD *)(a2 + 4);
  v10 = sub_9892C(*(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), 8, v9);
  sub_93198(v6, v7, "QTDV:%x:%s:%x:", v8, v10, *(_DWORD *)(a2 + 32));
  v11 = strlen(*v5);
  v12 = strlen(*(const char **)a2);
  v13 = (char *)&(*v5)[v11];
  if ( v11 + 2 * v12 >= sub_1E28B8(v12) )
    sub_94708("Trace state variable name too long for tsv definition packet");
  v14 = *(const char **)a2;
  v15 = strlen(v14);
  v13[2 * sub_99448((int)v14, v13, v15)] = 0;
  v16 = sub_1E7E14(*v5);
  sub_1E9910(v16);
  if ( !**v5 )
    sub_94708("Target does not support this command.");
  result = strcmp(*v5, "OK");
  if ( result )
    sub_94708("Error on target while downloading trace state variable.");
  return result;
}
