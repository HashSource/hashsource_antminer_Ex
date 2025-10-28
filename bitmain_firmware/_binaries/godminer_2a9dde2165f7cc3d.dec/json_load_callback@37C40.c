int __fastcall json_load_callback(int a1, int a2, int a3, char *a4)
{
  _DWORD v9[2]; // [sp+0h] [bp-45Ch] BYREF
  char v10; // [sp+8h] [bp-454h]
  int v11; // [sp+10h] [bp-44Ch]
  int v12; // [sp+14h] [bp-448h]
  int v13; // [sp+18h] [bp-444h]
  int v14; // [sp+1Ch] [bp-440h]
  int v15; // [sp+24h] [bp-438h]
  _BYTE v16[12]; // [sp+28h] [bp-434h] BYREF
  int v17; // [sp+34h] [bp-428h]
  int v18; // [sp+3Ch] [bp-420h]
  _DWORD s[261]; // [sp+48h] [bp-414h] BYREF

  memset(s, 0, 0x410u);
  s[259] = a2;
  s[258] = a1;
  jsonp_error_init(a4, "<callback>");
  if ( a1 )
  {
    a1 = 0;
    v9[1] = s;
    v9[0] = sub_36648;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v14 = 0;
    v15 = 0;
    v13 = 1;
    if ( !strbuffer_init(v16) )
    {
      v17 = a3;
      v18 = -1;
      a1 = sub_3772C(v9, a3, (int)a4);
      sub_367D4(v9);
    }
  }
  else
  {
    sub_366A4((int)a4, 0, 4, "wrong arguments");
  }
  return a1;
}
