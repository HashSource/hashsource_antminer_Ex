int __fastcall json_loadfd(int a1, int a2, char *a3)
{
  char *v4; // r1
  int v6; // r4
  int v8; // [sp+4h] [bp-4Ch] BYREF
  _DWORD v9[2]; // [sp+8h] [bp-48h] BYREF
  char v10; // [sp+10h] [bp-40h]
  int v11; // [sp+18h] [bp-38h]
  int v12; // [sp+1Ch] [bp-34h]
  int v13; // [sp+20h] [bp-30h]
  int v14; // [sp+24h] [bp-2Ch]
  int v15; // [sp+2Ch] [bp-24h]
  _BYTE v16[12]; // [sp+30h] [bp-20h] BYREF
  int v17; // [sp+3Ch] [bp-14h]
  int v18; // [sp+44h] [bp-Ch]

  v8 = a1;
  if ( a1 )
    v4 = "<stream>";
  else
    v4 = "<stdin>";
  jsonp_error_init(a3, v4);
  if ( v8 < 0 )
  {
    v6 = 0;
    sub_35894((int)a3, 0, 4, "wrong arguments");
  }
  else
  {
    v6 = 0;
    v9[0] = sub_35A04;
    v9[1] = &v8;
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
      v6 = sub_368D8(v9, a2, (int)a3);
      sub_359C4(v9);
    }
  }
  return v6;
}
