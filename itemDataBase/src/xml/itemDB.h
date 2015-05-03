#pragma once

#using <mscorlib.dll>
#using <System.dll>
#using <System.Data.dll>
#using <System.Xml.dll>

using namespace System::Security::Permissions;
[assembly:SecurityPermissionAttribute(SecurityAction::RequestMinimum, SkipVerification=false)];
// 
// Ce code source a été automatiquement généré par xsd, Version=4.0.30319.33440.
// 
using namespace System;
ref class NewDataSet;


/// <summary>
///Represents a strongly typed in-memory cache of data.
///</summary>
[System::Serializable, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::ComponentModel::ToolboxItem(true), 
System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedDataSetSchema"), 
System::Xml::Serialization::XmlRootAttribute(L"NewDataSet"), 
System::ComponentModel::Design::HelpKeywordAttribute(L"vs.data.DataSet")]
public ref class NewDataSet : public ::System::Data::DataSet {
    public : ref class itemDataTable;
    public : ref class itemDataBaseDataTable;
    public : ref class itemRow;
    public : ref class itemDataBaseRow;
    public : ref class itemRowChangeEvent;
    public : ref class itemDataBaseRowChangeEvent;
    
    private: NewDataSet::itemDataTable^  tableitem;
    
    private: NewDataSet::itemDataBaseDataTable^  tableitemDataBase;
    
    private: ::System::Data::DataRelation^  relationitemDataBase_item;
    
    private: ::System::Data::SchemaSerializationMode _schemaSerializationMode;
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void itemRowChangeEventHandler(::System::Object^  sender, NewDataSet::itemRowChangeEvent^  e);
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void itemDataBaseRowChangeEventHandler(::System::Object^  sender, NewDataSet::itemDataBaseRowChangeEvent^  e);
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    NewDataSet();
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    NewDataSet(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::Browsable(false), 
    System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
    property NewDataSet::itemDataTable^  item {
        NewDataSet::itemDataTable^  get();
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::Browsable(false), 
    System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
    property NewDataSet::itemDataBaseDataTable^  itemDataBase {
        NewDataSet::itemDataBaseDataTable^  get();
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::BrowsableAttribute(true), 
    System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Visible)]
    virtual property ::System::Data::SchemaSerializationMode SchemaSerializationMode {
        ::System::Data::SchemaSerializationMode get() override;
        System::Void set(::System::Data::SchemaSerializationMode value) override;
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Hidden)]
    property ::System::Data::DataTableCollection^  Tables {
        ::System::Data::DataTableCollection^  get() new;
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Hidden)]
    property ::System::Data::DataRelationCollection^  Relations {
        ::System::Data::DataRelationCollection^  get() new;
    }
    
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Void InitializeDerivedDataSet() override;
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Data::DataSet^  Clone() override;
    
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Boolean ShouldSerializeTables() override;
    
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Boolean ShouldSerializeRelations() override;
    
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Void ReadXmlSerializable(::System::Xml::XmlReader^  reader) override;
    
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Xml::Schema::XmlSchema^  GetSchemaSerializable() override;
    
    internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Void InitVars();
    
    internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Void InitVars(::System::Boolean initTable);
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Void InitClass();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Boolean ShouldSerializeitem();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Boolean ShouldSerializeitemDataBase();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Void SchemaChanged(::System::Object^  sender, ::System::ComponentModel::CollectionChangeEventArgs^  e);
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedDataSetSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    
    public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
    [System::Serializable, 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
    ref class itemDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columncode;
        
        private: ::System::Data::DataColumn^  columnname;
        
        private: ::System::Data::DataColumn^  columncrown;
        
        private: ::System::Data::DataColumn^  columnpenny;
        
        private: ::System::Data::DataColumn^  columnschiling;
        
        private: ::System::Data::DataColumn^  columndimension;
        
        private: ::System::Data::DataColumn^  columnrarity;
        
        private: ::System::Data::DataColumn^  columnitemDataBase_Id;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::itemRowChangeEventHandler^  itemRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::itemRowChangeEventHandler^  itemRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::itemRowChangeEventHandler^  itemRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::itemRowChangeEventHandler^  itemRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        itemDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        itemDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        itemDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  codeColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  nameColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  crownColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  pennyColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  schilingColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  dimensionColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  rarityColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  itemDataBase_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false)]
        property ::System::Int32 Count {
            ::System::Int32 get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property NewDataSet::itemRow^  default [::System::Int32 ] {
            NewDataSet::itemRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AdditemRow(NewDataSet::itemRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        NewDataSet::itemRow^  AdditemRow(
                    System::String^  code, 
                    System::String^  name, 
                    System::UInt64 crown, 
                    System::UInt64 penny, 
                    System::UInt64 schiling, 
                    System::Int64 dimension, 
                    System::Int64 rarity, 
                    NewDataSet::itemDataBaseRow^  parentitemDataBaseRowByitemDataBase_item);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Collections::IEnumerator^  GetEnumerator();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  Clone() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  CreateInstance() override;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitClass();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        NewDataSet::itemRow^  NewitemRow();
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Type^  GetRowType() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void RemoveitemRow(NewDataSet::itemRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
    [System::Serializable, 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
    ref class itemDataBaseDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columnitemDataBase_Id;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::itemDataBaseRowChangeEventHandler^  itemDataBaseRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::itemDataBaseRowChangeEventHandler^  itemDataBaseRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::itemDataBaseRowChangeEventHandler^  itemDataBaseRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::itemDataBaseRowChangeEventHandler^  itemDataBaseRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        itemDataBaseDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        itemDataBaseDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        itemDataBaseDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  itemDataBase_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false)]
        property ::System::Int32 Count {
            ::System::Int32 get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property NewDataSet::itemDataBaseRow^  default [::System::Int32 ] {
            NewDataSet::itemDataBaseRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AdditemDataBaseRow(NewDataSet::itemDataBaseRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        NewDataSet::itemDataBaseRow^  AdditemDataBaseRow();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Collections::IEnumerator^  GetEnumerator();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  Clone() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  CreateInstance() override;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitClass();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        NewDataSet::itemDataBaseRow^  NewitemDataBaseRow();
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Type^  GetRowType() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void RemoveitemDataBaseRow(NewDataSet::itemDataBaseRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class itemRow : public ::System::Data::DataRow {
        
        private: NewDataSet::itemDataTable^  tableitem;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        itemRow(::System::Data::DataRowBuilder^  rb);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::String^  code {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::String^  name {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 crown {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 penny {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 schiling {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int64 dimension {
            System::Int64 get();
            System::Void set(System::Int64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int64 rarity {
            System::Int64 get();
            System::Void set(System::Int64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 itemDataBase_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property NewDataSet::itemDataBaseRow^  itemDataBaseRow {
            NewDataSet::itemDataBaseRow^  get();
            System::Void set(NewDataSet::itemDataBaseRow^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsitemDataBase_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetitemDataBase_IdNull();
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class itemDataBaseRow : public ::System::Data::DataRow {
        
        private: NewDataSet::itemDataBaseDataTable^  tableitemDataBase;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        itemDataBaseRow(::System::Data::DataRowBuilder^  rb);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 itemDataBase_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cli::array< NewDataSet::itemRow^  >^  GetitemRows();
    };
    
    public : /// <summary>
///Row event argument class
///</summary>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ref class itemRowChangeEvent : public ::System::EventArgs {
        
        private: NewDataSet::itemRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        itemRowChangeEvent(NewDataSet::itemRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property NewDataSet::itemRow^  Row {
            NewDataSet::itemRow^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataRowAction Action {
            ::System::Data::DataRowAction get();
        }
    };
    
    public : /// <summary>
///Row event argument class
///</summary>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ref class itemDataBaseRowChangeEvent : public ::System::EventArgs {
        
        private: NewDataSet::itemDataBaseRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        itemDataBaseRowChangeEvent(NewDataSet::itemDataBaseRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property NewDataSet::itemDataBaseRow^  Row {
            NewDataSet::itemDataBaseRow^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataRowAction Action {
            ::System::Data::DataRowAction get();
        }
    };
};


inline NewDataSet::NewDataSet() {
    this->BeginInit();
    this->InitClass();
    ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &NewDataSet::SchemaChanged);
    __super::Tables->CollectionChanged += schemaChangedHandler;
    __super::Relations->CollectionChanged += schemaChangedHandler;
    this->EndInit();
}

inline NewDataSet::NewDataSet(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataSet(info, context, false) {
    if (this->IsBinarySerialized(info, context) == true) {
        this->InitVars(false);
        ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler1 = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &NewDataSet::SchemaChanged);
        this->Tables->CollectionChanged += schemaChangedHandler1;
        this->Relations->CollectionChanged += schemaChangedHandler1;
        return;
    }
    ::System::String^  strSchema = (cli::safe_cast<::System::String^  >(info->GetValue(L"XmlSchema", ::System::String::typeid)));
    if (this->DetermineSchemaSerializationMode(info, context) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
        ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
        ds->ReadXmlSchema((gcnew ::System::Xml::XmlTextReader((gcnew ::System::IO::StringReader(strSchema)))));
        if (ds->Tables[L"item"] != nullptr) {
            __super::Tables->Add((gcnew NewDataSet::itemDataTable(ds->Tables[L"item"])));
        }
        if (ds->Tables[L"itemDataBase"] != nullptr) {
            __super::Tables->Add((gcnew NewDataSet::itemDataBaseDataTable(ds->Tables[L"itemDataBase"])));
        }
        this->DataSetName = ds->DataSetName;
        this->Prefix = ds->Prefix;
        this->Namespace = ds->Namespace;
        this->Locale = ds->Locale;
        this->CaseSensitive = ds->CaseSensitive;
        this->EnforceConstraints = ds->EnforceConstraints;
        this->Merge(ds, false, ::System::Data::MissingSchemaAction::Add);
        this->InitVars();
    }
    else {
        this->ReadXmlSchema((gcnew ::System::Xml::XmlTextReader((gcnew ::System::IO::StringReader(strSchema)))));
    }
    this->GetSerializationData(info, context);
    ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &NewDataSet::SchemaChanged);
    __super::Tables->CollectionChanged += schemaChangedHandler;
    this->Relations->CollectionChanged += schemaChangedHandler;
}

inline NewDataSet::itemDataTable^  NewDataSet::item::get() {
    return this->tableitem;
}

inline NewDataSet::itemDataBaseDataTable^  NewDataSet::itemDataBase::get() {
    return this->tableitemDataBase;
}

inline ::System::Data::SchemaSerializationMode NewDataSet::SchemaSerializationMode::get() {
    return this->_schemaSerializationMode;
}
inline System::Void NewDataSet::SchemaSerializationMode::set(::System::Data::SchemaSerializationMode value) {
    this->_schemaSerializationMode = __identifier(value);
}

inline ::System::Data::DataTableCollection^  NewDataSet::Tables::get() {
    return __super::Tables;
}

inline ::System::Data::DataRelationCollection^  NewDataSet::Relations::get() {
    return __super::Relations;
}

inline ::System::Void NewDataSet::InitializeDerivedDataSet() {
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline ::System::Data::DataSet^  NewDataSet::Clone() {
    NewDataSet^  cln = (cli::safe_cast<NewDataSet^  >(__super::Clone()));
    cln->InitVars();
    cln->SchemaSerializationMode = this->SchemaSerializationMode;
    return cln;
}

inline ::System::Boolean NewDataSet::ShouldSerializeTables() {
    return false;
}

inline ::System::Boolean NewDataSet::ShouldSerializeRelations() {
    return false;
}

inline ::System::Void NewDataSet::ReadXmlSerializable(::System::Xml::XmlReader^  reader) {
    if (this->DetermineSchemaSerializationMode(reader) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
        this->Reset();
        ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
        ds->ReadXml(reader);
        if (ds->Tables[L"item"] != nullptr) {
            __super::Tables->Add((gcnew NewDataSet::itemDataTable(ds->Tables[L"item"])));
        }
        if (ds->Tables[L"itemDataBase"] != nullptr) {
            __super::Tables->Add((gcnew NewDataSet::itemDataBaseDataTable(ds->Tables[L"itemDataBase"])));
        }
        this->DataSetName = ds->DataSetName;
        this->Prefix = ds->Prefix;
        this->Namespace = ds->Namespace;
        this->Locale = ds->Locale;
        this->CaseSensitive = ds->CaseSensitive;
        this->EnforceConstraints = ds->EnforceConstraints;
        this->Merge(ds, false, ::System::Data::MissingSchemaAction::Add);
        this->InitVars();
    }
    else {
        this->ReadXml(reader);
        this->InitVars();
    }
}

inline ::System::Xml::Schema::XmlSchema^  NewDataSet::GetSchemaSerializable() {
    ::System::IO::MemoryStream^  stream = (gcnew ::System::IO::MemoryStream());
    this->WriteXmlSchema((gcnew ::System::Xml::XmlTextWriter(stream, nullptr)));
    stream->Position = 0;
    return ::System::Xml::Schema::XmlSchema::Read((gcnew ::System::Xml::XmlTextReader(stream)), nullptr);
}

inline ::System::Void NewDataSet::InitVars() {
    this->InitVars(true);
}

inline ::System::Void NewDataSet::InitVars(::System::Boolean initTable) {
    this->tableitem = (cli::safe_cast<NewDataSet::itemDataTable^  >(__super::Tables[L"item"]));
    if (initTable == true) {
        if (this->tableitem != nullptr) {
            this->tableitem->InitVars();
        }
    }
    this->tableitemDataBase = (cli::safe_cast<NewDataSet::itemDataBaseDataTable^  >(__super::Tables[L"itemDataBase"]));
    if (initTable == true) {
        if (this->tableitemDataBase != nullptr) {
            this->tableitemDataBase->InitVars();
        }
    }
    this->relationitemDataBase_item = this->Relations[L"itemDataBase_item"];
}

inline ::System::Void NewDataSet::InitClass() {
    this->DataSetName = L"NewDataSet";
    this->Prefix = L"";
    this->Locale = (gcnew ::System::Globalization::CultureInfo(L""));
    this->EnforceConstraints = true;
    this->SchemaSerializationMode = ::System::Data::SchemaSerializationMode::IncludeSchema;
    this->tableitem = (gcnew NewDataSet::itemDataTable());
    __super::Tables->Add(this->tableitem);
    this->tableitemDataBase = (gcnew NewDataSet::itemDataBaseDataTable());
    __super::Tables->Add(this->tableitemDataBase);
    ::System::Data::ForeignKeyConstraint^  fkc;
    fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"itemDataBase_item", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableitemDataBase->itemDataBase_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableitem->itemDataBase_IdColumn}));
    this->tableitem->Constraints->Add(fkc);
    fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
    fkc->DeleteRule = ::System::Data::Rule::Cascade;
    fkc->UpdateRule = ::System::Data::Rule::Cascade;
    this->relationitemDataBase_item = (gcnew ::System::Data::DataRelation(L"itemDataBase_item", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableitemDataBase->itemDataBase_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableitem->itemDataBase_IdColumn}, false));
    this->relationitemDataBase_item->Nested = true;
    this->Relations->Add(this->relationitemDataBase_item);
}

inline ::System::Boolean NewDataSet::ShouldSerializeitem() {
    return false;
}

inline ::System::Boolean NewDataSet::ShouldSerializeitemDataBase() {
    return false;
}

inline ::System::Void NewDataSet::SchemaChanged(::System::Object^  sender, ::System::ComponentModel::CollectionChangeEventArgs^  e) {
    if (e->Action == ::System::ComponentModel::CollectionChangeAction::Remove) {
        this->InitVars();
    }
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::GetTypedDataSetSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
    NewDataSet^  ds = (gcnew NewDataSet());
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    ::System::Xml::Schema::XmlSchemaAny^  any = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any->Namespace = ds->Namespace;
    sequence->Items->Add(any);
    type->Particle = sequence;
    ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
    if (xs->Contains(dsSchema->TargetNamespace)) {
        ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
        ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
        try {
            ::System::Xml::Schema::XmlSchema^  schema = nullptr;
            dsSchema->Write(s1);
            for (            ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();             ) {
                schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                s2->SetLength(0);
                schema->Write(s2);
                if (s1->Length == s2->Length) {
                    s1->Position = 0;
                    s2->Position = 0;
                    for (                    ; ((s1->Position != s1->Length) 
                                && (s1->ReadByte() == s2->ReadByte()));                     ) {
                        ;
                    }
                    if (s1->Position == s1->Length) {
                        return type;
                    }
                }
            }
        }
        finally {
            if (s1 != nullptr) {
                s1->Close();
            }
            if (s2 != nullptr) {
                s2->Close();
            }
        }
    }
    xs->Add(dsSchema);
    return type;
}


inline NewDataSet::itemDataTable::itemDataTable() {
    this->TableName = L"item";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline NewDataSet::itemDataTable::itemDataTable(::System::Data::DataTable^  table) {
    this->TableName = table->TableName;
    if (table->CaseSensitive != table->DataSet->CaseSensitive) {
        this->CaseSensitive = table->CaseSensitive;
    }
    if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
        this->Locale = table->Locale;
    }
    if (table->Namespace != table->DataSet->Namespace) {
        this->Namespace = table->Namespace;
    }
    this->Prefix = table->Prefix;
    this->MinimumCapacity = table->MinimumCapacity;
}

inline NewDataSet::itemDataTable::itemDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  NewDataSet::itemDataTable::codeColumn::get() {
    return this->columncode;
}

inline ::System::Data::DataColumn^  NewDataSet::itemDataTable::nameColumn::get() {
    return this->columnname;
}

inline ::System::Data::DataColumn^  NewDataSet::itemDataTable::crownColumn::get() {
    return this->columncrown;
}

inline ::System::Data::DataColumn^  NewDataSet::itemDataTable::pennyColumn::get() {
    return this->columnpenny;
}

inline ::System::Data::DataColumn^  NewDataSet::itemDataTable::schilingColumn::get() {
    return this->columnschiling;
}

inline ::System::Data::DataColumn^  NewDataSet::itemDataTable::dimensionColumn::get() {
    return this->columndimension;
}

inline ::System::Data::DataColumn^  NewDataSet::itemDataTable::rarityColumn::get() {
    return this->columnrarity;
}

inline ::System::Data::DataColumn^  NewDataSet::itemDataTable::itemDataBase_IdColumn::get() {
    return this->columnitemDataBase_Id;
}

inline ::System::Int32 NewDataSet::itemDataTable::Count::get() {
    return this->Rows->Count;
}

inline NewDataSet::itemRow^  NewDataSet::itemDataTable::default::get(::System::Int32 index) {
    return (cli::safe_cast<NewDataSet::itemRow^  >(this->Rows[index]));
}

inline ::System::Void NewDataSet::itemDataTable::AdditemRow(NewDataSet::itemRow^  row) {
    this->Rows->Add(row);
}

inline NewDataSet::itemRow^  NewDataSet::itemDataTable::AdditemRow(
            System::String^  code, 
            System::String^  name, 
            System::UInt64 crown, 
            System::UInt64 penny, 
            System::UInt64 schiling, 
            System::Int64 dimension, 
            System::Int64 rarity, 
            NewDataSet::itemDataBaseRow^  parentitemDataBaseRowByitemDataBase_item) {
    NewDataSet::itemRow^  rowitemRow = (cli::safe_cast<NewDataSet::itemRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(8) {code, name, crown, penny, 
        schiling, dimension, rarity, nullptr};
    if (parentitemDataBaseRowByitemDataBase_item != nullptr) {
        columnValuesArray[7] = parentitemDataBaseRowByitemDataBase_item[0];
    }
    rowitemRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowitemRow);
    return rowitemRow;
}

inline ::System::Collections::IEnumerator^  NewDataSet::itemDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  NewDataSet::itemDataTable::Clone() {
    NewDataSet::itemDataTable^  cln = (cli::safe_cast<NewDataSet::itemDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  NewDataSet::itemDataTable::CreateInstance() {
    return (gcnew NewDataSet::itemDataTable());
}

inline ::System::Void NewDataSet::itemDataTable::InitVars() {
    this->columncode = __super::Columns[L"code"];
    this->columnname = __super::Columns[L"name"];
    this->columncrown = __super::Columns[L"crown"];
    this->columnpenny = __super::Columns[L"penny"];
    this->columnschiling = __super::Columns[L"schiling"];
    this->columndimension = __super::Columns[L"dimension"];
    this->columnrarity = __super::Columns[L"rarity"];
    this->columnitemDataBase_Id = __super::Columns[L"itemDataBase_Id"];
}

inline ::System::Void NewDataSet::itemDataTable::InitClass() {
    this->columncode = (gcnew ::System::Data::DataColumn(L"code", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columncode);
    this->columnname = (gcnew ::System::Data::DataColumn(L"name", ::System::String::typeid, nullptr, ::System::Data::MappingType::Element));
    __super::Columns->Add(this->columnname);
    this->columncrown = (gcnew ::System::Data::DataColumn(L"crown", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Element));
    __super::Columns->Add(this->columncrown);
    this->columnpenny = (gcnew ::System::Data::DataColumn(L"penny", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Element));
    __super::Columns->Add(this->columnpenny);
    this->columnschiling = (gcnew ::System::Data::DataColumn(L"schiling", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Element));
    __super::Columns->Add(this->columnschiling);
    this->columndimension = (gcnew ::System::Data::DataColumn(L"dimension", ::System::Int64::typeid, nullptr, ::System::Data::MappingType::Element));
    __super::Columns->Add(this->columndimension);
    this->columnrarity = (gcnew ::System::Data::DataColumn(L"rarity", ::System::Int64::typeid, nullptr, ::System::Data::MappingType::Element));
    __super::Columns->Add(this->columnrarity);
    this->columnitemDataBase_Id = (gcnew ::System::Data::DataColumn(L"itemDataBase_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnitemDataBase_Id);
    this->columncode->AllowDBNull = false;
    this->columncode->Namespace = L"";
    this->columnname->AllowDBNull = false;
    this->columncrown->AllowDBNull = false;
    this->columnpenny->AllowDBNull = false;
    this->columnschiling->AllowDBNull = false;
    this->columndimension->AllowDBNull = false;
    this->columnrarity->AllowDBNull = false;
}

inline NewDataSet::itemRow^  NewDataSet::itemDataTable::NewitemRow() {
    return (cli::safe_cast<NewDataSet::itemRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  NewDataSet::itemDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew NewDataSet::itemRow(builder));
}

inline ::System::Type^  NewDataSet::itemDataTable::GetRowType() {
    return NewDataSet::itemRow::typeid;
}

inline ::System::Void NewDataSet::itemDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->itemRowChanged(this, (gcnew NewDataSet::itemRowChangeEvent((cli::safe_cast<NewDataSet::itemRow^  >(e->Row)), e->Action)));
    }
}

inline ::System::Void NewDataSet::itemDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->itemRowChanging(this, (gcnew NewDataSet::itemRowChangeEvent((cli::safe_cast<NewDataSet::itemRow^  >(e->Row)), e->Action)));
    }
}

inline ::System::Void NewDataSet::itemDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->itemRowDeleted(this, (gcnew NewDataSet::itemRowChangeEvent((cli::safe_cast<NewDataSet::itemRow^  >(e->Row)), e->Action)));
    }
}

inline ::System::Void NewDataSet::itemDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->itemRowDeleting(this, (gcnew NewDataSet::itemRowChangeEvent((cli::safe_cast<NewDataSet::itemRow^  >(e->Row)), e->Action)));
    }
}

inline ::System::Void NewDataSet::itemDataTable::RemoveitemRow(NewDataSet::itemRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::itemDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    NewDataSet^  ds = (gcnew NewDataSet());
    ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
    any1->MinOccurs = ::System::Decimal(0);
    any1->MaxOccurs = ::System::Decimal::MaxValue;
    any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any1);
    ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
    any2->MinOccurs = ::System::Decimal(1);
    any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any2);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute1->Name = L"namespace";
    attribute1->FixedValue = ds->Namespace;
    type->Attributes->Add(attribute1);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute2->Name = L"tableTypeName";
    attribute2->FixedValue = L"itemDataTable";
    type->Attributes->Add(attribute2);
    type->Particle = sequence;
    ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
    if (xs->Contains(dsSchema->TargetNamespace)) {
        ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
        ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
        try {
            ::System::Xml::Schema::XmlSchema^  schema = nullptr;
            dsSchema->Write(s1);
            for (            ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();             ) {
                schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                s2->SetLength(0);
                schema->Write(s2);
                if (s1->Length == s2->Length) {
                    s1->Position = 0;
                    s2->Position = 0;
                    for (                    ; ((s1->Position != s1->Length) 
                                && (s1->ReadByte() == s2->ReadByte()));                     ) {
                        ;
                    }
                    if (s1->Position == s1->Length) {
                        return type;
                    }
                }
            }
        }
        finally {
            if (s1 != nullptr) {
                s1->Close();
            }
            if (s2 != nullptr) {
                s2->Close();
            }
        }
    }
    xs->Add(dsSchema);
    return type;
}


inline NewDataSet::itemDataBaseDataTable::itemDataBaseDataTable() {
    this->TableName = L"itemDataBase";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline NewDataSet::itemDataBaseDataTable::itemDataBaseDataTable(::System::Data::DataTable^  table) {
    this->TableName = table->TableName;
    if (table->CaseSensitive != table->DataSet->CaseSensitive) {
        this->CaseSensitive = table->CaseSensitive;
    }
    if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
        this->Locale = table->Locale;
    }
    if (table->Namespace != table->DataSet->Namespace) {
        this->Namespace = table->Namespace;
    }
    this->Prefix = table->Prefix;
    this->MinimumCapacity = table->MinimumCapacity;
}

inline NewDataSet::itemDataBaseDataTable::itemDataBaseDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
            ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  NewDataSet::itemDataBaseDataTable::itemDataBase_IdColumn::get() {
    return this->columnitemDataBase_Id;
}

inline ::System::Int32 NewDataSet::itemDataBaseDataTable::Count::get() {
    return this->Rows->Count;
}

inline NewDataSet::itemDataBaseRow^  NewDataSet::itemDataBaseDataTable::default::get(::System::Int32 index) {
    return (cli::safe_cast<NewDataSet::itemDataBaseRow^  >(this->Rows[index]));
}

inline ::System::Void NewDataSet::itemDataBaseDataTable::AdditemDataBaseRow(NewDataSet::itemDataBaseRow^  row) {
    this->Rows->Add(row);
}

inline NewDataSet::itemDataBaseRow^  NewDataSet::itemDataBaseDataTable::AdditemDataBaseRow() {
    NewDataSet::itemDataBaseRow^  rowitemDataBaseRow = (cli::safe_cast<NewDataSet::itemDataBaseRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(1) {nullptr};
    rowitemDataBaseRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowitemDataBaseRow);
    return rowitemDataBaseRow;
}

inline ::System::Collections::IEnumerator^  NewDataSet::itemDataBaseDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  NewDataSet::itemDataBaseDataTable::Clone() {
    NewDataSet::itemDataBaseDataTable^  cln = (cli::safe_cast<NewDataSet::itemDataBaseDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  NewDataSet::itemDataBaseDataTable::CreateInstance() {
    return (gcnew NewDataSet::itemDataBaseDataTable());
}

inline ::System::Void NewDataSet::itemDataBaseDataTable::InitVars() {
    this->columnitemDataBase_Id = __super::Columns[L"itemDataBase_Id"];
}

inline ::System::Void NewDataSet::itemDataBaseDataTable::InitClass() {
    this->columnitemDataBase_Id = (gcnew ::System::Data::DataColumn(L"itemDataBase_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnitemDataBase_Id);
    this->Constraints->Add((gcnew ::System::Data::UniqueConstraint(L"Constraint1", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->columnitemDataBase_Id}, 
            true)));
    this->columnitemDataBase_Id->AutoIncrement = true;
    this->columnitemDataBase_Id->AllowDBNull = false;
    this->columnitemDataBase_Id->Unique = true;
}

inline NewDataSet::itemDataBaseRow^  NewDataSet::itemDataBaseDataTable::NewitemDataBaseRow() {
    return (cli::safe_cast<NewDataSet::itemDataBaseRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  NewDataSet::itemDataBaseDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew NewDataSet::itemDataBaseRow(builder));
}

inline ::System::Type^  NewDataSet::itemDataBaseDataTable::GetRowType() {
    return NewDataSet::itemDataBaseRow::typeid;
}

inline ::System::Void NewDataSet::itemDataBaseDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->itemDataBaseRowChanged(this, (gcnew NewDataSet::itemDataBaseRowChangeEvent((cli::safe_cast<NewDataSet::itemDataBaseRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::itemDataBaseDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->itemDataBaseRowChanging(this, (gcnew NewDataSet::itemDataBaseRowChangeEvent((cli::safe_cast<NewDataSet::itemDataBaseRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::itemDataBaseDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->itemDataBaseRowDeleted(this, (gcnew NewDataSet::itemDataBaseRowChangeEvent((cli::safe_cast<NewDataSet::itemDataBaseRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::itemDataBaseDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->itemDataBaseRowDeleting(this, (gcnew NewDataSet::itemDataBaseRowChangeEvent((cli::safe_cast<NewDataSet::itemDataBaseRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::itemDataBaseDataTable::RemoveitemDataBaseRow(NewDataSet::itemDataBaseRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::itemDataBaseDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    NewDataSet^  ds = (gcnew NewDataSet());
    ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
    any1->MinOccurs = ::System::Decimal(0);
    any1->MaxOccurs = ::System::Decimal::MaxValue;
    any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any1);
    ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
    any2->MinOccurs = ::System::Decimal(1);
    any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any2);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute1->Name = L"namespace";
    attribute1->FixedValue = ds->Namespace;
    type->Attributes->Add(attribute1);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute2->Name = L"tableTypeName";
    attribute2->FixedValue = L"itemDataBaseDataTable";
    type->Attributes->Add(attribute2);
    type->Particle = sequence;
    ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
    if (xs->Contains(dsSchema->TargetNamespace)) {
        ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
        ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
        try {
            ::System::Xml::Schema::XmlSchema^  schema = nullptr;
            dsSchema->Write(s1);
            for (            ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();             ) {
                schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                s2->SetLength(0);
                schema->Write(s2);
                if (s1->Length == s2->Length) {
                    s1->Position = 0;
                    s2->Position = 0;
                    for (                    ; ((s1->Position != s1->Length) 
                                && (s1->ReadByte() == s2->ReadByte()));                     ) {
                        ;
                    }
                    if (s1->Position == s1->Length) {
                        return type;
                    }
                }
            }
        }
        finally {
            if (s1 != nullptr) {
                s1->Close();
            }
            if (s2 != nullptr) {
                s2->Close();
            }
        }
    }
    xs->Add(dsSchema);
    return type;
}


inline NewDataSet::itemRow::itemRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tableitem = (cli::safe_cast<NewDataSet::itemDataTable^  >(this->Table));
}

inline System::String^  NewDataSet::itemRow::code::get() {
    return (cli::safe_cast<::System::String^  >(this[this->tableitem->codeColumn]));
}
inline System::Void NewDataSet::itemRow::code::set(System::String^  value) {
    this[this->tableitem->codeColumn] = value;
}

inline System::String^  NewDataSet::itemRow::name::get() {
    return (cli::safe_cast<::System::String^  >(this[this->tableitem->nameColumn]));
}
inline System::Void NewDataSet::itemRow::name::set(System::String^  value) {
    this[this->tableitem->nameColumn] = value;
}

inline System::UInt64 NewDataSet::itemRow::crown::get() {
    return (cli::safe_cast<::System::UInt64 >(this[this->tableitem->crownColumn]));
}
inline System::Void NewDataSet::itemRow::crown::set(System::UInt64 value) {
    this[this->tableitem->crownColumn] = value;
}

inline System::UInt64 NewDataSet::itemRow::penny::get() {
    return (cli::safe_cast<::System::UInt64 >(this[this->tableitem->pennyColumn]));
}
inline System::Void NewDataSet::itemRow::penny::set(System::UInt64 value) {
    this[this->tableitem->pennyColumn] = value;
}

inline System::UInt64 NewDataSet::itemRow::schiling::get() {
    return (cli::safe_cast<::System::UInt64 >(this[this->tableitem->schilingColumn]));
}
inline System::Void NewDataSet::itemRow::schiling::set(System::UInt64 value) {
    this[this->tableitem->schilingColumn] = value;
}

inline System::Int64 NewDataSet::itemRow::dimension::get() {
    return (cli::safe_cast<::System::Int64 >(this[this->tableitem->dimensionColumn]));
}
inline System::Void NewDataSet::itemRow::dimension::set(System::Int64 value) {
    this[this->tableitem->dimensionColumn] = value;
}

inline System::Int64 NewDataSet::itemRow::rarity::get() {
    return (cli::safe_cast<::System::Int64 >(this[this->tableitem->rarityColumn]));
}
inline System::Void NewDataSet::itemRow::rarity::set(System::Int64 value) {
    this[this->tableitem->rarityColumn] = value;
}

inline System::Int32 NewDataSet::itemRow::itemDataBase_Id::get() {
    try {
        return (cli::safe_cast<::System::Int32 >(this[this->tableitem->itemDataBase_IdColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"La valeur pour la colonne \'itemDataBase_Id\' dans la table \'item\' est DBNull.", 
            e));
    }
}
inline System::Void NewDataSet::itemRow::itemDataBase_Id::set(System::Int32 value) {
    this[this->tableitem->itemDataBase_IdColumn] = value;
}

inline NewDataSet::itemDataBaseRow^  NewDataSet::itemRow::itemDataBaseRow::get() {
    return (cli::safe_cast<NewDataSet::itemDataBaseRow^  >(this->GetParentRow(this->Table->ParentRelations[L"itemDataBase_item"])));
}
inline System::Void NewDataSet::itemRow::itemDataBaseRow::set(NewDataSet::itemDataBaseRow^  value) {
    this->SetParentRow(value, this->Table->ParentRelations[L"itemDataBase_item"]);
}

inline ::System::Boolean NewDataSet::itemRow::IsitemDataBase_IdNull() {
    return this->IsNull(this->tableitem->itemDataBase_IdColumn);
}

inline ::System::Void NewDataSet::itemRow::SetitemDataBase_IdNull() {
    this[this->tableitem->itemDataBase_IdColumn] = ::System::Convert::DBNull;
}


inline NewDataSet::itemDataBaseRow::itemDataBaseRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tableitemDataBase = (cli::safe_cast<NewDataSet::itemDataBaseDataTable^  >(this->Table));
}

inline System::Int32 NewDataSet::itemDataBaseRow::itemDataBase_Id::get() {
    return (cli::safe_cast<::System::Int32 >(this[this->tableitemDataBase->itemDataBase_IdColumn]));
}
inline System::Void NewDataSet::itemDataBaseRow::itemDataBase_Id::set(System::Int32 value) {
    this[this->tableitemDataBase->itemDataBase_IdColumn] = value;
}

inline cli::array< NewDataSet::itemRow^  >^  NewDataSet::itemDataBaseRow::GetitemRows() {
    if (this->Table->ChildRelations[L"itemDataBase_item"] == nullptr) {
        return gcnew cli::array< NewDataSet::itemRow^  >(0);
    }
    else {
        return (cli::safe_cast<cli::array< NewDataSet::itemRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"itemDataBase_item"])));
    }
}


inline NewDataSet::itemRowChangeEvent::itemRowChangeEvent(NewDataSet::itemRow^  row, ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline NewDataSet::itemRow^  NewDataSet::itemRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction NewDataSet::itemRowChangeEvent::Action::get() {
    return this->eventAction;
}


inline NewDataSet::itemDataBaseRowChangeEvent::itemDataBaseRowChangeEvent(NewDataSet::itemDataBaseRow^  row, ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline NewDataSet::itemDataBaseRow^  NewDataSet::itemDataBaseRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction NewDataSet::itemDataBaseRowChangeEvent::Action::get() {
    return this->eventAction;
}
