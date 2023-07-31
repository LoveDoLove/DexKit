// automatically generated by the FlatBuffers compiler, do not modify

package org.luckypray.dexkit.schema

import com.google.flatbuffers.BaseVector
import com.google.flatbuffers.BooleanVector
import com.google.flatbuffers.ByteVector
import com.google.flatbuffers.Constants
import com.google.flatbuffers.DoubleVector
import com.google.flatbuffers.FlatBufferBuilder
import com.google.flatbuffers.FloatVector
import com.google.flatbuffers.LongVector
import com.google.flatbuffers.StringVector
import com.google.flatbuffers.Struct
import com.google.flatbuffers.Table
import com.google.flatbuffers.UnionVector
import java.nio.ByteBuffer
import java.nio.ByteOrder
import kotlin.math.sign

@Suppress("unused")
class BatchUsingStringsMatcher : Table() {

    fun __init(_i: Int, _bb: ByteBuffer)  {
        __reset(_i, _bb)
    }
    fun __assign(_i: Int, _bb: ByteBuffer) : BatchUsingStringsMatcher {
        __init(_i, _bb)
        return this
    }
    val unionKey : String?
        get() {
            val o = __offset(4)
            return if (o != 0) {
                __string(o + bb_pos)
            } else {
                null
            }
        }
    val unionKeyAsByteBuffer : ByteBuffer get() = __vector_as_bytebuffer(4, 1)
    fun unionKeyInByteBuffer(_bb: ByteBuffer) : ByteBuffer = __vector_in_bytebuffer(_bb, 4, 1)
    fun usingStrings(j: Int) : StringMatcher? = usingStrings(StringMatcher(), j)
    fun usingStrings(obj: StringMatcher, j: Int) : StringMatcher? {
        val o = __offset(6)
        return if (o != 0) {
            obj.__assign(__indirect(__vector(o) + j * 4), bb)
        } else {
            null
        }
    }
    val usingStringsLength : Int
        get() {
            val o = __offset(6); return if (o != 0) __vector_len(o) else 0
        }
    companion object {
        fun validateVersion() = Constants.FLATBUFFERS_23_5_26()
        fun getRootAsBatchUsingStringsMatcher(_bb: ByteBuffer): BatchUsingStringsMatcher = getRootAsBatchUsingStringsMatcher(_bb, BatchUsingStringsMatcher())
        fun getRootAsBatchUsingStringsMatcher(_bb: ByteBuffer, obj: BatchUsingStringsMatcher): BatchUsingStringsMatcher {
            _bb.order(ByteOrder.LITTLE_ENDIAN)
            return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb))
        }
        fun createBatchUsingStringsMatcher(builder: FlatBufferBuilder, unionKeyOffset: Int, usingStringsOffset: Int) : Int {
            builder.startTable(2)
            addUsingStrings(builder, usingStringsOffset)
            addUnionKey(builder, unionKeyOffset)
            return endBatchUsingStringsMatcher(builder)
        }
        fun startBatchUsingStringsMatcher(builder: FlatBufferBuilder) = builder.startTable(2)
        fun addUnionKey(builder: FlatBufferBuilder, unionKey: Int) = builder.addOffset(0, unionKey, 0)
        fun addUsingStrings(builder: FlatBufferBuilder, usingStrings: Int) = builder.addOffset(1, usingStrings, 0)
        fun createUsingStringsVector(builder: FlatBufferBuilder, data: IntArray) : Int {
            builder.startVector(4, data.size, 4)
            for (i in data.size - 1 downTo 0) {
                builder.addOffset(data[i])
            }
            return builder.endVector()
        }
        fun startUsingStringsVector(builder: FlatBufferBuilder, numElems: Int) = builder.startVector(4, numElems, 4)
        fun endBatchUsingStringsMatcher(builder: FlatBufferBuilder) : Int {
            val o = builder.endTable()
            return o
        }
    }
}
