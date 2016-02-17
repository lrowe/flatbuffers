// automatically generated, do not modify

namespace NamespaceA
{

using System;
using FlatBuffers;

public sealed class TableInC : Table {
  public static TableInC GetRootAsTableInC(ByteBuffer _bb) { return GetRootAsTableInC(_bb, new TableInC()); }
  public static TableInC GetRootAsTableInC(ByteBuffer _bb, TableInC obj) { return (obj.__init(_bb.GetInt(_bb.Position) + _bb.Position, _bb)); }
  public TableInC __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; return this; }

  public NamespaceA.TableInFirstNS ReferToA1 { get { return GetReferToA1(new NamespaceA.TableInFirstNS()); } }
  public NamespaceA.TableInFirstNS GetReferToA1(NamespaceA.TableInFirstNS obj) { int o = __offset(4); return o != 0 ? obj.__init(__indirect(o + bb_pos), bb) : null; }
  public SecondTableInA ReferToA2 { get { return GetReferToA2(new SecondTableInA()); } }
  public SecondTableInA GetReferToA2(SecondTableInA obj) { int o = __offset(6); return o != 0 ? obj.__init(__indirect(o + bb_pos), bb) : null; }

  public static Offset<NamespaceC.TableInC> CreateTableInC(FlatBufferBuilder builder,
      Offset<NamespaceA.TableInFirstNS> refer_to_a1Offset = default(Offset<NamespaceA.TableInFirstNS>),
      Offset<SecondTableInA> refer_to_a2Offset = default(Offset<SecondTableInA>)) {
    builder.StartObject(2);
    TableInC.AddReferToA2(builder, refer_to_a2Offset);
    TableInC.AddReferToA1(builder, refer_to_a1Offset);
    return TableInC.EndTableInC(builder);
  }

  public static void StartTableInC(FlatBufferBuilder builder) { builder.StartObject(2); }
  public static void AddReferToA1(FlatBufferBuilder builder, Offset<NamespaceA.TableInFirstNS> referToA1Offset) { builder.AddOffset(0, referToA1Offset.Value, 0); }
  public static void AddReferToA2(FlatBufferBuilder builder, Offset<SecondTableInA> referToA2Offset) { builder.AddOffset(1, referToA2Offset.Value, 0); }
  public static Offset<NamespaceC.TableInC> EndTableInC(FlatBufferBuilder builder) {
    int o = builder.EndObject();
    return new Offset<NamespaceC.TableInC>(o);
  }
};


}