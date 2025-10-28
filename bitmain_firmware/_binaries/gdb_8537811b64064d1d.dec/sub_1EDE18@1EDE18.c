int __fastcall sub_1EDE18(int a1, _DWORD *a2, int *a3)
{
  int v5; // r7
  int v6; // r0
  const char **v7; // r5
  int v8; // r1
  int v9; // r9
  int v10; // r3
  char *v11; // r0
  const char *v12; // r10
  size_t v13; // r1
  char *v14; // r9
  size_t v15; // r0
  int v16; // r10
  char *v17; // r9
  int v18; // r0
  int result; // r0
  const char *v20; // r0
  char v21; // [sp+8h] [bp-34h] BYREF
  char *v22; // [sp+Ch] [bp-30h]
  int v23; // [sp+10h] [bp-2Ch]
  char *v24; // [sp+14h] [bp-28h]

  v23 = a1;
  v5 = sub_1DD5B4(a1);
  v6 = sub_16F67C(v5);
  ((void (__fastcall *)(int))loc_1E2798)(v6);
  v7 = (const char **)dword_488C94;
  v8 = *a2;
  v24 = *(char **)dword_488C94;
  ((void (__fastcall *)(int, int))loc_1DD448)(v5, v8);
  v22 = &v21;
  if ( ((int (__fastcall *)(int))loc_1E21C0)(3) == 2 || *(_QWORD *)a3 == -1 )
    return 0;
  v9 = sub_1E28B8(*a3);
  v11 = sub_98A18(*a3, a3[1], 0, v10);
  v12 = v24;
  v13 = v9;
  v14 = v24;
  sub_93198(v24, v13, "P%s=", v11);
  v15 = strlen(v12);
  v16 = (int)v22;
  v17 = &v14[v15];
  ((void (__fastcall *)(int, _DWORD, char *))loc_1DEBD4)(v23, *a2, v22);
  v18 = ((int (__fastcall *)(int, _DWORD))loc_1DD448)(v5, *a2);
  sub_99448(v16, v17, v18);
  sub_1E7E14(*v7);
  sub_1E4EE0((char **)v7, (size_t *)v7 + 1, 0, 0, 0);
  result = sub_1E1790(*v7, dword_48871C);
  if ( result == 1 )
    return result;
  if ( !result )
  {
LABEL_9:
    v20 = (const char *)((int (__fastcall *)(int, _DWORD))loc_1677E8)(v5, *a2);
    sub_94708("Could not write register \"%s\"; remote failure reply '%s'", v20, *v7);
  }
  if ( result != 2 )
  {
    sub_94728((int)"remote.c", 7804, "Bad result from packet_ok");
    goto LABEL_9;
  }
  return 0;
}
