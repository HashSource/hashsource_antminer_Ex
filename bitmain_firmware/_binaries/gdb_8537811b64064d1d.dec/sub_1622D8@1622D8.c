int __fastcall sub_1622D8(int a1)
{
  int v1; // r6
  void *v3; // [sp+8h] [bp-34h] BYREF
  int v4; // [sp+Ch] [bp-30h]
  char v5[16]; // [sp+10h] [bp-2Ch] BYREF
  void *ptr; // [sp+20h] [bp-1Ch] BYREF
  int v7; // [sp+24h] [bp-18h]
  char v8[20]; // [sp+28h] [bp-14h] BYREF

  v1 = *(_DWORD *)sub_243004(a1);
  strcpy(v8, "bfds");
  v7 = 4;
  ptr = v8;
  sub_257074(v1, 3, -1, &ptr);
  if ( ptr != v8 )
    sub_339E8C(ptr);
  ptr = v8;
  strcpy(v5, "refcount");
  v3 = v5;
  v4 = 8;
  strcpy(v8, "Refcount");
  v7 = 8;
  sub_2571E0(v1, 10, -1, &v3, &ptr);
  if ( ptr != v8 )
    sub_339E8C(ptr);
  if ( v3 != v5 )
    sub_339E8C(v3);
  strcpy(v8, "Address");
  v3 = v5;
  ptr = v8;
  strcpy(v5, "addr");
  v4 = 4;
  v7 = 7;
  sub_2571E0(v1, 18, -1, &v3, &ptr);
  if ( ptr != v8 )
    sub_339E8C(ptr);
  if ( v3 != v5 )
    sub_339E8C(v3);
  v3 = v5;
  strcpy(v5, "filename");
  ptr = v8;
  v4 = 8;
  strcpy(v8, "Filename");
  v7 = 8;
  sub_2571E0(v1, 40, -1, &v3, &ptr);
  if ( ptr != v8 )
    sub_339E8C(ptr);
  if ( v3 != v5 )
    sub_339E8C(v3);
  sub_257254(v1);
  sub_3241AC(dword_48776C, sub_16217C, v1);
  return sub_257298(v1);
}
