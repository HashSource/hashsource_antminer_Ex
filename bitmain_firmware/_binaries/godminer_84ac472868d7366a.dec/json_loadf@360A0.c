int __fastcall json_loadf(int a1, int a2, char *a3)
{
  char *v6; // r1
  int v7; // r4
  _DWORD v9[2]; // [sp+0h] [bp-4Ch] BYREF
  char v10; // [sp+8h] [bp-44h]
  int v11; // [sp+10h] [bp-3Ch]
  int v12; // [sp+14h] [bp-38h]
  int v13; // [sp+18h] [bp-34h]
  int v14; // [sp+1Ch] [bp-30h]
  int v15; // [sp+24h] [bp-28h]
  _BYTE v16[12]; // [sp+28h] [bp-24h] BYREF
  int v17; // [sp+34h] [bp-18h]
  int v18; // [sp+3Ch] [bp-10h]

  if ( stdin == a1 )
    v6 = "<stdin>";
  else
    v6 = "<stream>";
  jsonp_error_init(a3, v6);
  if ( a1 )
  {
    v7 = 0;
    v9[1] = a1;
    v9[0] = fgetc;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v14 = 0;
    v15 = 0;
    v13 = 1;
    if ( !strbuffer_init(v16) )
    {
      v17 = a2;
      v18 = -1;
      v7 = sub_35E00(v9, a2, (int)a3);
      sub_34EEC(v9);
    }
  }
  else
  {
    v7 = 0;
    sub_34DBC((int)a3, 0, 4, "wrong arguments");
  }
  return v7;
}
