int __fastcall sub_268D4(int result, _DWORD *a2, int a3)
{
  int v3; // r4
  _DWORD *v4; // r12
  int v5; // r3
  int v6; // t1
  int v7; // r6
  int v9; // r0
  __int64 v10; // r0
  int v11; // r0
  int v12; // r2
  int v13; // r5

  v3 = a2[2];
  if ( v3 > 0 )
  {
    v4 = (_DWORD *)a2[4];
    if ( a3 == *v4 )
    {
      v13 = 0;
LABEL_7:
      v7 = result;
      v9 = json_string(*(_DWORD *)(a2[3] + v13));
      json_object_set_new(v7, "status", v9);
      v10 = *(int *)(a2[4] + v13);
      v11 = json_integer(v10, HIDWORD(v10));
      json_object_set_new(v7, "code", v11);
      v12 = json_string(*(_DWORD *)(a2[5] + v13));
      return json_object_set_new(v7, "msg", v12);
    }
    else
    {
      v5 = 0;
      while ( 1 )
      {
        ++v5;
        v13 = 4 * v5;
        if ( v5 == v3 )
          break;
        v6 = v4[1];
        ++v4;
        if ( v6 == a3 )
          goto LABEL_7;
      }
    }
  }
  return result;
}
