int __fastcall sub_18EE34(int *a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r7
  _BOOL4 v6; // r0
  int v7; // r5
  int v8; // r0
  int v9; // r3
  _DWORD *v10; // r0

  if ( !sub_98FA0(a1, &qword_4878EC) )
    sub_1851F4(*a1, a1[1], a1[2]);
  v2 = sub_1DDB68(*a1, a1[1], a1[2]);
  v3 = a1[5];
  v4 = v2;
  dword_4878F8 = sub_1DFB64(v2);
  if ( sub_C4CB4(dword_4878F8) <= 0 )
    goto LABEL_15;
  v6 = sub_C4CD0(v3);
  if ( v6 <= 0 )
    goto LABEL_15;
  if ( dword_487930 )
  {
    v10 = (_DWORD *)sub_242FF0(v6);
    sub_2594D8(*v10, "infrun: syscall number = '%d'\n", v3);
  }
  v7 = a1[3];
  v8 = sub_D8108(*(int **)(v4 + 4), dword_4878F8, *a1, a1[1], a1[2], (int)(a1 + 4));
  v9 = a1[3];
  *(_DWORD *)(v7 + 136) = v8;
  if ( *(_DWORD *)(v9 + 224) )
  {
LABEL_10:
    a1[4] = 1;
    a1[5] = 0;
    ((void (__fastcall *)(int *))loc_18DE1C)(a1);
    return 0;
  }
  if ( !sub_CF388(*(_DWORD *)(v9 + 136)) )
  {
LABEL_15:
    if ( !*(_DWORD *)(a1[3] + 224) )
    {
      sub_18C360(a1);
      return 1;
    }
    goto LABEL_10;
  }
  return 0;
}
