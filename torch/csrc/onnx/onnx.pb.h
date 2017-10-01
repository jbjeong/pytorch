/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9-dev */

#ifndef PB_ONNX_ONNX_PB_H_INCLUDED
#define PB_ONNX_ONNX_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _onnx_Version {
    onnx_Version_IR_VERSION = 1
} onnx_Version;
#define _onnx_Version_MIN onnx_Version_IR_VERSION
#define _onnx_Version_MAX onnx_Version_IR_VERSION
#define _onnx_Version_ARRAYSIZE ((onnx_Version)(onnx_Version_IR_VERSION+1))

typedef enum _onnx_TensorProto_DataType {
    onnx_TensorProto_DataType_UNDEFINED = 0,
    onnx_TensorProto_DataType_FLOAT = 1,
    onnx_TensorProto_DataType_UINT8 = 2,
    onnx_TensorProto_DataType_INT8 = 3,
    onnx_TensorProto_DataType_UINT16 = 4,
    onnx_TensorProto_DataType_INT16 = 5,
    onnx_TensorProto_DataType_INT32 = 6,
    onnx_TensorProto_DataType_INT64 = 7,
    onnx_TensorProto_DataType_STRING = 8,
    onnx_TensorProto_DataType_BOOL = 9,
    onnx_TensorProto_DataType_FLOAT16 = 10
} onnx_TensorProto_DataType;
#define _onnx_TensorProto_DataType_MIN onnx_TensorProto_DataType_UNDEFINED
#define _onnx_TensorProto_DataType_MAX onnx_TensorProto_DataType_FLOAT16
#define _onnx_TensorProto_DataType_ARRAYSIZE ((onnx_TensorProto_DataType)(onnx_TensorProto_DataType_FLOAT16+1))

/* Struct definitions */
typedef struct _onnx_GraphProto {
    pb_callback_t node;
    pb_callback_t name;
    pb_callback_t input;
    pb_callback_t output;
    pb_callback_t initializer;
    pb_callback_t doc_string;
/* @@protoc_insertion_point(struct:onnx_GraphProto) */
} onnx_GraphProto;

typedef struct _onnx_NodeProto {
    pb_callback_t input;
    pb_callback_t output;
    pb_callback_t name;
    pb_callback_t op_type;
    pb_callback_t attribute;
    pb_callback_t doc_string;
/* @@protoc_insertion_point(struct:onnx_NodeProto) */
} onnx_NodeProto;

typedef struct _onnx_AttributeProto {
    pb_callback_t name;
    bool has_f;
    float f;
    bool has_i;
    int64_t i;
    pb_callback_t s;
    pb_callback_t t;
    pb_callback_t g;
    pb_callback_t floats;
    pb_callback_t ints;
    pb_callback_t strings;
    pb_callback_t tensors;
    pb_callback_t graphs;
/* @@protoc_insertion_point(struct:onnx_AttributeProto) */
} onnx_AttributeProto;

typedef struct _onnx_ModelProto {
    bool has_ir_version;
    int64_t ir_version;
    pb_callback_t producer_name;
    pb_callback_t producer_version;
    pb_callback_t domain;
    bool has_model_version;
    int64_t model_version;
    pb_callback_t doc_string;
    bool has_graph;
    onnx_GraphProto graph;
/* @@protoc_insertion_point(struct:onnx_ModelProto) */
} onnx_ModelProto;

typedef struct _onnx_TensorProto_Segment {
    bool has_begin;
    int64_t begin;
    bool has_end;
    int64_t end;
/* @@protoc_insertion_point(struct:onnx_TensorProto_Segment) */
} onnx_TensorProto_Segment;

typedef struct _onnx_TensorProto {
    pb_callback_t dims;
    bool has_data_type;
    onnx_TensorProto_DataType data_type;
    bool has_segment;
    onnx_TensorProto_Segment segment;
    pb_callback_t float_data;
    pb_callback_t int32_data;
    pb_callback_t string_data;
    pb_callback_t int64_data;
    pb_callback_t name;
    pb_callback_t raw_data;
/* @@protoc_insertion_point(struct:onnx_TensorProto) */
} onnx_TensorProto;

typedef struct _onnx_SparseTensorProto {
    pb_callback_t dims;
    bool has_indices;
    onnx_TensorProto indices;
    bool has_values;
    onnx_TensorProto values;
/* @@protoc_insertion_point(struct:onnx_SparseTensorProto) */
} onnx_SparseTensorProto;

/* Default values for struct fields */

/* Initializer values for message structs */
#define onnx_AttributeProto_init_default         {{{NULL}, NULL}, false, 0, false, 0, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define onnx_NodeProto_init_default              {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define onnx_ModelProto_init_default             {false, 0, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, false, 0, {{NULL}, NULL}, false, onnx_GraphProto_init_default}
#define onnx_GraphProto_init_default             {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define onnx_TensorProto_init_default            {{{NULL}, NULL}, false, (onnx_TensorProto_DataType)0, false, onnx_TensorProto_Segment_init_default, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define onnx_TensorProto_Segment_init_default    {false, 0, false, 0}
#define onnx_SparseTensorProto_init_default      {{{NULL}, NULL}, false, onnx_TensorProto_init_default, false, onnx_TensorProto_init_default}
#define onnx_AttributeProto_init_zero            {{{NULL}, NULL}, false, 0, false, 0, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define onnx_NodeProto_init_zero                 {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define onnx_ModelProto_init_zero                {false, 0, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, false, 0, {{NULL}, NULL}, false, onnx_GraphProto_init_zero}
#define onnx_GraphProto_init_zero                {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define onnx_TensorProto_init_zero               {{{NULL}, NULL}, false, (onnx_TensorProto_DataType)0, false, onnx_TensorProto_Segment_init_zero, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define onnx_TensorProto_Segment_init_zero       {false, 0, false, 0}
#define onnx_SparseTensorProto_init_zero         {{{NULL}, NULL}, false, onnx_TensorProto_init_zero, false, onnx_TensorProto_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define onnx_GraphProto_node_tag                 1
#define onnx_GraphProto_name_tag                 2
#define onnx_GraphProto_input_tag                3
#define onnx_GraphProto_output_tag               4
#define onnx_GraphProto_initializer_tag          5
#define onnx_GraphProto_doc_string_tag           10
#define onnx_NodeProto_input_tag                 1
#define onnx_NodeProto_output_tag                2
#define onnx_NodeProto_name_tag                  3
#define onnx_NodeProto_op_type_tag               4
#define onnx_NodeProto_attribute_tag             5
#define onnx_NodeProto_doc_string_tag            6
#define onnx_AttributeProto_name_tag             1
#define onnx_AttributeProto_f_tag                2
#define onnx_AttributeProto_i_tag                3
#define onnx_AttributeProto_s_tag                4
#define onnx_AttributeProto_t_tag                5
#define onnx_AttributeProto_g_tag                6
#define onnx_AttributeProto_floats_tag           7
#define onnx_AttributeProto_ints_tag             8
#define onnx_AttributeProto_strings_tag          9
#define onnx_AttributeProto_tensors_tag          10
#define onnx_AttributeProto_graphs_tag           11
#define onnx_ModelProto_ir_version_tag           1
#define onnx_ModelProto_producer_name_tag        2
#define onnx_ModelProto_producer_version_tag     3
#define onnx_ModelProto_domain_tag               4
#define onnx_ModelProto_model_version_tag        5
#define onnx_ModelProto_doc_string_tag           6
#define onnx_ModelProto_graph_tag                7
#define onnx_TensorProto_Segment_begin_tag       1
#define onnx_TensorProto_Segment_end_tag         2
#define onnx_TensorProto_dims_tag                1
#define onnx_TensorProto_data_type_tag           2
#define onnx_TensorProto_segment_tag             3
#define onnx_TensorProto_float_data_tag          4
#define onnx_TensorProto_int32_data_tag          5
#define onnx_TensorProto_string_data_tag         6
#define onnx_TensorProto_int64_data_tag          7
#define onnx_TensorProto_name_tag                8
#define onnx_TensorProto_raw_data_tag            9
#define onnx_SparseTensorProto_dims_tag          1
#define onnx_SparseTensorProto_indices_tag       2
#define onnx_SparseTensorProto_values_tag        3

/* Struct field encoding specification for nanopb */
extern const pb_field_t onnx_AttributeProto_fields[12];
extern const pb_field_t onnx_NodeProto_fields[7];
extern const pb_field_t onnx_ModelProto_fields[8];
extern const pb_field_t onnx_GraphProto_fields[7];
extern const pb_field_t onnx_TensorProto_fields[10];
extern const pb_field_t onnx_TensorProto_Segment_fields[3];
extern const pb_field_t onnx_SparseTensorProto_fields[4];

/* Maximum encoded size of messages (where known) */
/* onnx_AttributeProto_size depends on runtime parameters */
/* onnx_NodeProto_size depends on runtime parameters */
/* onnx_ModelProto_size depends on runtime parameters */
/* onnx_GraphProto_size depends on runtime parameters */
/* onnx_TensorProto_size depends on runtime parameters */
#define onnx_TensorProto_Segment_size            22
/* onnx_SparseTensorProto_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define ONNX_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
