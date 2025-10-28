int __fastcall sub_271720(int a1, _BYTE *a2)
{
  int v3; // r7
  void *v4; // r6
  int v5; // r8
  int v6; // r6
  int v7; // r9
  void *v8; // r8
  int v9; // r9
  void *v11; // r0
  __int64 v12; // kr00_8
  int v13; // r0
  _BYTE *v14; // [sp+8h] [bp-8h] BYREF
  void *ptr; // [sp+Ch] [bp-4h] BYREF

  v14 = a2;
  v3 = dword_46DE54;
  if ( !sub_271678(a1) )
  {
    sub_94728(
      (int)"varobj.c",
      1026,
      "%s: Assertion `%s' failed.",
      "bool varobj_set_value(varobj*, const char*)",
      "varobj_editable_p (var)");
    goto LABEL_9;
  }
  dword_46DE54 = 10;
  sub_1C42A4((char **)&ptr, &v14, 0, 0, 0);
  v4 = sub_92E50();
  v5 = sub_14CD64((int *)ptr);
  sub_92E68((int)v4);
  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 104) + 36) + 28))(a1);
  if ( v6 )
  {
    if ( !sub_26BF74(*(_DWORD *)(a1 + 80)) )
    {
      v7 = sub_26EAD4(v5);
      v8 = sub_92E50();
      v9 = ((int (__fastcall *)(_DWORD, int))loc_265570)(*(_DWORD *)(a1 + 80), v7);
      sub_92E68((int)v8);
      *(_BYTE *)(a1 + 112) = sub_270858(a1, v9, 0);
      dword_46DE54 = v3;
      goto LABEL_5;
    }
LABEL_9:
    sub_94728(
      (int)"varobj.c",
      1046,
      "%s: Assertion `%s' failed.",
      "bool varobj_set_value(varobj*, const char*)",
      "!value_lazy (var->value)");
    v11 = ptr;
    if ( ptr )
      free(ptr);
    sub_339024(v11);
  }
  v12 = sub_94728(
          (int)"varobj.c",
          1043,
          "%s: Assertion `%s' failed.",
          "bool varobj_set_value(varobj*, const char*)",
          "varobj_value_is_changeable_p (var)");
  sub_92E68(v5);
  if ( HIDWORD(v12) != 1 )
  {
    sub_339EA0(v12);
    sub_92E88();
  }
  v6 = 0;
  v13 = sub_339EA0(v12);
  sub_339F20(v13);
LABEL_5:
  if ( ptr )
    free(ptr);
  return v6;
}
