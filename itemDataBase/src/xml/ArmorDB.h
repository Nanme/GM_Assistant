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
    public : ref class armorPointDataTable;
    public : ref class malusDataTable;
    public : ref class armorDataTable;
    public : ref class armorDBDataTable;
    public : ref class armorPointRow;
    public : ref class malusRow;
    public : ref class armorRow;
    public : ref class armorDBRow;
    public : ref class armorPointRowChangeEvent;
    public : ref class malusRowChangeEvent;
    public : ref class armorRowChangeEvent;
    public : ref class armorDBRowChangeEvent;
    
    private: NewDataSet::armorPointDataTable^  tablearmorPoint;
    
    private: NewDataSet::malusDataTable^  tablemalus;
    
    private: NewDataSet::armorDataTable^  tablearmor;
    
    private: NewDataSet::armorDBDataTable^  tablearmorDB;
    
    private: ::System::Data::DataRelation^  relationarmor_armorPoint;
    
    private: ::System::Data::DataRelation^  relationarmor_malus;
    
    private: ::System::Data::DataRelation^  relationarmorDB_armor;
    
    private: ::System::Data::SchemaSerializationMode _schemaSerializationMode;
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void armorPointRowChangeEventHandler(::System::Object^  sender, NewDataSet::armorPointRowChangeEvent^  e);
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void malusRowChangeEventHandler(::System::Object^  sender, NewDataSet::malusRowChangeEvent^  e);
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void armorRowChangeEventHandler(::System::Object^  sender, NewDataSet::armorRowChangeEvent^  e);
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void armorDBRowChangeEventHandler(::System::Object^  sender, NewDataSet::armorDBRowChangeEvent^  e);
    
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
    property NewDataSet::armorPointDataTable^  armorPoint {
        NewDataSet::armorPointDataTable^  get();
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::Browsable(false), 
    System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
    property NewDataSet::malusDataTable^  malus {
        NewDataSet::malusDataTable^  get();
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::Browsable(false), 
    System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
    property NewDataSet::armorDataTable^  armor {
        NewDataSet::armorDataTable^  get();
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::Browsable(false), 
    System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
    property NewDataSet::armorDBDataTable^  armorDB {
        NewDataSet::armorDBDataTable^  get();
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
    ::System::Boolean ShouldSerializearmorPoint();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Boolean ShouldSerializemalus();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Boolean ShouldSerializearmor();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Boolean ShouldSerializearmorDB();
    
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
    ref class armorPointDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columnarea;
        
        private: ::System::Data::DataColumn^  columnarmorPoint_text;
        
        private: ::System::Data::DataColumn^  columnarmor_Id;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::armorPointRowChangeEventHandler^  armorPointRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::armorPointRowChangeEventHandler^  armorPointRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::armorPointRowChangeEventHandler^  armorPointRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::armorPointRowChangeEventHandler^  armorPointRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        armorPointDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        armorPointDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        armorPointDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  areaColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  armorPoint_textColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  armor_IdColumn {
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
        property NewDataSet::armorPointRow^  default [::System::Int32 ] {
            NewDataSet::armorPointRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AddarmorPointRow(NewDataSet::armorPointRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        NewDataSet::armorPointRow^  AddarmorPointRow(System::UInt64 area, System::UInt64 armorPoint_text, NewDataSet::armorRow^  parentarmorRowByarmor_armorPoint);
        
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
        NewDataSet::armorPointRow^  NewarmorPointRow();
        
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
        ::System::Void RemovearmorPointRow(NewDataSet::armorPointRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
    [System::Serializable, 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
    ref class malusDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columntype;
        
        private: ::System::Data::DataColumn^  columnmalus_text;
        
        private: ::System::Data::DataColumn^  columnarmor_Id;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::malusRowChangeEventHandler^  malusRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::malusRowChangeEventHandler^  malusRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::malusRowChangeEventHandler^  malusRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::malusRowChangeEventHandler^  malusRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        malusDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        malusDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        malusDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  typeColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  malus_textColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  armor_IdColumn {
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
        property NewDataSet::malusRow^  default [::System::Int32 ] {
            NewDataSet::malusRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AddmalusRow(NewDataSet::malusRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        NewDataSet::malusRow^  AddmalusRow(System::UInt64 type, System::UInt64 malus_text, NewDataSet::armorRow^  parentarmorRowByarmor_malus);
        
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
        NewDataSet::malusRow^  NewmalusRow();
        
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
        ::System::Void RemovemalusRow(NewDataSet::malusRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
    [System::Serializable, 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
    ref class armorDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columncode;
        
        private: ::System::Data::DataColumn^  columnname;
        
        private: ::System::Data::DataColumn^  columncrown;
        
        private: ::System::Data::DataColumn^  columnpenny;
        
        private: ::System::Data::DataColumn^  columnschiling;
        
        private: ::System::Data::DataColumn^  columndimension;
        
        private: ::System::Data::DataColumn^  columnrarity;
        
        private: ::System::Data::DataColumn^  columnarmor_Id;
        
        private: ::System::Data::DataColumn^  columnarmorDB_Id;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::armorRowChangeEventHandler^  armorRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::armorRowChangeEventHandler^  armorRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::armorRowChangeEventHandler^  armorRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::armorRowChangeEventHandler^  armorRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        armorDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        armorDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        armorDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
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
        property ::System::Data::DataColumn^  armor_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  armorDB_IdColumn {
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
        property NewDataSet::armorRow^  default [::System::Int32 ] {
            NewDataSet::armorRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AddarmorRow(NewDataSet::armorRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        NewDataSet::armorRow^  AddarmorRow(
                    System::String^  code, 
                    System::String^  name, 
                    System::UInt64 crown, 
                    System::UInt64 penny, 
                    System::UInt64 schiling, 
                    System::UInt64 dimension, 
                    System::String^  rarity, 
                    NewDataSet::armorDBRow^  parentarmorDBRowByarmorDB_armor);
        
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
        NewDataSet::armorRow^  NewarmorRow();
        
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
        ::System::Void RemovearmorRow(NewDataSet::armorRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
    [System::Serializable, 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
    ref class armorDBDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columnarmorDB_Id;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::armorDBRowChangeEventHandler^  armorDBRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::armorDBRowChangeEventHandler^  armorDBRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::armorDBRowChangeEventHandler^  armorDBRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::armorDBRowChangeEventHandler^  armorDBRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        armorDBDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        armorDBDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        armorDBDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  armorDB_IdColumn {
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
        property NewDataSet::armorDBRow^  default [::System::Int32 ] {
            NewDataSet::armorDBRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AddarmorDBRow(NewDataSet::armorDBRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        NewDataSet::armorDBRow^  AddarmorDBRow();
        
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
        NewDataSet::armorDBRow^  NewarmorDBRow();
        
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
        ::System::Void RemovearmorDBRow(NewDataSet::armorDBRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class armorPointRow : public ::System::Data::DataRow {
        
        private: NewDataSet::armorPointDataTable^  tablearmorPoint;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        armorPointRow(::System::Data::DataRowBuilder^  rb);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 area {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 armorPoint_text {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 armor_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property NewDataSet::armorRow^  armorRow {
            NewDataSet::armorRow^  get();
            System::Void set(NewDataSet::armorRow^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsareaNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetareaNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean Isarmor_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void Setarmor_IdNull();
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class malusRow : public ::System::Data::DataRow {
        
        private: NewDataSet::malusDataTable^  tablemalus;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        malusRow(::System::Data::DataRowBuilder^  rb);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 type {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 malus_text {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 armor_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property NewDataSet::armorRow^  armorRow {
            NewDataSet::armorRow^  get();
            System::Void set(NewDataSet::armorRow^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IstypeNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SettypeNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean Isarmor_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void Setarmor_IdNull();
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class armorRow : public ::System::Data::DataRow {
        
        private: NewDataSet::armorDataTable^  tablearmor;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        armorRow(::System::Data::DataRowBuilder^  rb);
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
        property System::UInt64 dimension {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::String^  rarity {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 armor_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 armorDB_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property NewDataSet::armorDBRow^  armorDBRow {
            NewDataSet::armorDBRow^  get();
            System::Void set(NewDataSet::armorDBRow^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IscodeNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetcodeNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsarmorDB_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetarmorDB_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cli::array< NewDataSet::armorPointRow^  >^  GetarmorPointRows();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cli::array< NewDataSet::malusRow^  >^  GetmalusRows();
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class armorDBRow : public ::System::Data::DataRow {
        
        private: NewDataSet::armorDBDataTable^  tablearmorDB;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        armorDBRow(::System::Data::DataRowBuilder^  rb);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 armorDB_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cli::array< NewDataSet::armorRow^  >^  GetarmorRows();
    };
    
    public : /// <summary>
///Row event argument class
///</summary>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ref class armorPointRowChangeEvent : public ::System::EventArgs {
        
        private: NewDataSet::armorPointRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        armorPointRowChangeEvent(NewDataSet::armorPointRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property NewDataSet::armorPointRow^  Row {
            NewDataSet::armorPointRow^  get();
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
    ref class malusRowChangeEvent : public ::System::EventArgs {
        
        private: NewDataSet::malusRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        malusRowChangeEvent(NewDataSet::malusRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property NewDataSet::malusRow^  Row {
            NewDataSet::malusRow^  get();
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
    ref class armorRowChangeEvent : public ::System::EventArgs {
        
        private: NewDataSet::armorRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        armorRowChangeEvent(NewDataSet::armorRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property NewDataSet::armorRow^  Row {
            NewDataSet::armorRow^  get();
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
    ref class armorDBRowChangeEvent : public ::System::EventArgs {
        
        private: NewDataSet::armorDBRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        armorDBRowChangeEvent(NewDataSet::armorDBRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property NewDataSet::armorDBRow^  Row {
            NewDataSet::armorDBRow^  get();
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
        if (ds->Tables[L"armorPoint"] != nullptr) {
            __super::Tables->Add((gcnew NewDataSet::armorPointDataTable(ds->Tables[L"armorPoint"])));
        }
        if (ds->Tables[L"malus"] != nullptr) {
            __super::Tables->Add((gcnew NewDataSet::malusDataTable(ds->Tables[L"malus"])));
        }
        if (ds->Tables[L"armor"] != nullptr) {
            __super::Tables->Add((gcnew NewDataSet::armorDataTable(ds->Tables[L"armor"])));
        }
        if (ds->Tables[L"armorDB"] != nullptr) {
            __super::Tables->Add((gcnew NewDataSet::armorDBDataTable(ds->Tables[L"armorDB"])));
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

inline NewDataSet::armorPointDataTable^  NewDataSet::armorPoint::get() {
    return this->tablearmorPoint;
}

inline NewDataSet::malusDataTable^  NewDataSet::malus::get() {
    return this->tablemalus;
}

inline NewDataSet::armorDataTable^  NewDataSet::armor::get() {
    return this->tablearmor;
}

inline NewDataSet::armorDBDataTable^  NewDataSet::armorDB::get() {
    return this->tablearmorDB;
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
        if (ds->Tables[L"armorPoint"] != nullptr) {
            __super::Tables->Add((gcnew NewDataSet::armorPointDataTable(ds->Tables[L"armorPoint"])));
        }
        if (ds->Tables[L"malus"] != nullptr) {
            __super::Tables->Add((gcnew NewDataSet::malusDataTable(ds->Tables[L"malus"])));
        }
        if (ds->Tables[L"armor"] != nullptr) {
            __super::Tables->Add((gcnew NewDataSet::armorDataTable(ds->Tables[L"armor"])));
        }
        if (ds->Tables[L"armorDB"] != nullptr) {
            __super::Tables->Add((gcnew NewDataSet::armorDBDataTable(ds->Tables[L"armorDB"])));
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
    this->tablearmorPoint = (cli::safe_cast<NewDataSet::armorPointDataTable^  >(__super::Tables[L"armorPoint"]));
    if (initTable == true) {
        if (this->tablearmorPoint != nullptr) {
            this->tablearmorPoint->InitVars();
        }
    }
    this->tablemalus = (cli::safe_cast<NewDataSet::malusDataTable^  >(__super::Tables[L"malus"]));
    if (initTable == true) {
        if (this->tablemalus != nullptr) {
            this->tablemalus->InitVars();
        }
    }
    this->tablearmor = (cli::safe_cast<NewDataSet::armorDataTable^  >(__super::Tables[L"armor"]));
    if (initTable == true) {
        if (this->tablearmor != nullptr) {
            this->tablearmor->InitVars();
        }
    }
    this->tablearmorDB = (cli::safe_cast<NewDataSet::armorDBDataTable^  >(__super::Tables[L"armorDB"]));
    if (initTable == true) {
        if (this->tablearmorDB != nullptr) {
            this->tablearmorDB->InitVars();
        }
    }
    this->relationarmor_armorPoint = this->Relations[L"armor_armorPoint"];
    this->relationarmor_malus = this->Relations[L"armor_malus"];
    this->relationarmorDB_armor = this->Relations[L"armorDB_armor"];
}

inline ::System::Void NewDataSet::InitClass() {
    this->DataSetName = L"NewDataSet";
    this->Prefix = L"";
    this->Locale = (gcnew ::System::Globalization::CultureInfo(L""));
    this->EnforceConstraints = true;
    this->SchemaSerializationMode = ::System::Data::SchemaSerializationMode::IncludeSchema;
    this->tablearmorPoint = (gcnew NewDataSet::armorPointDataTable());
    __super::Tables->Add(this->tablearmorPoint);
    this->tablemalus = (gcnew NewDataSet::malusDataTable());
    __super::Tables->Add(this->tablemalus);
    this->tablearmor = (gcnew NewDataSet::armorDataTable());
    __super::Tables->Add(this->tablearmor);
    this->tablearmorDB = (gcnew NewDataSet::armorDBDataTable());
    __super::Tables->Add(this->tablearmorDB);
    ::System::Data::ForeignKeyConstraint^  fkc;
    fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"armor_armorPoint", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablearmor->armor_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablearmorPoint->armor_IdColumn}));
    this->tablearmorPoint->Constraints->Add(fkc);
    fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
    fkc->DeleteRule = ::System::Data::Rule::Cascade;
    fkc->UpdateRule = ::System::Data::Rule::Cascade;
    fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"armor_malus", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablearmor->armor_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablemalus->armor_IdColumn}));
    this->tablemalus->Constraints->Add(fkc);
    fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
    fkc->DeleteRule = ::System::Data::Rule::Cascade;
    fkc->UpdateRule = ::System::Data::Rule::Cascade;
    fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"armorDB_armor", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablearmorDB->armorDB_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablearmor->armorDB_IdColumn}));
    this->tablearmor->Constraints->Add(fkc);
    fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
    fkc->DeleteRule = ::System::Data::Rule::Cascade;
    fkc->UpdateRule = ::System::Data::Rule::Cascade;
    this->relationarmor_armorPoint = (gcnew ::System::Data::DataRelation(L"armor_armorPoint", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablearmor->armor_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablearmorPoint->armor_IdColumn}, false));
    this->relationarmor_armorPoint->Nested = true;
    this->Relations->Add(this->relationarmor_armorPoint);
    this->relationarmor_malus = (gcnew ::System::Data::DataRelation(L"armor_malus", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablearmor->armor_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablemalus->armor_IdColumn}, false));
    this->relationarmor_malus->Nested = true;
    this->Relations->Add(this->relationarmor_malus);
    this->relationarmorDB_armor = (gcnew ::System::Data::DataRelation(L"armorDB_armor", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablearmorDB->armorDB_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablearmor->armorDB_IdColumn}, false));
    this->relationarmorDB_armor->Nested = true;
    this->Relations->Add(this->relationarmorDB_armor);
}

inline ::System::Boolean NewDataSet::ShouldSerializearmorPoint() {
    return false;
}

inline ::System::Boolean NewDataSet::ShouldSerializemalus() {
    return false;
}

inline ::System::Boolean NewDataSet::ShouldSerializearmor() {
    return false;
}

inline ::System::Boolean NewDataSet::ShouldSerializearmorDB() {
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


inline NewDataSet::armorPointDataTable::armorPointDataTable() {
    this->TableName = L"armorPoint";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline NewDataSet::armorPointDataTable::armorPointDataTable(::System::Data::DataTable^  table) {
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

inline NewDataSet::armorPointDataTable::armorPointDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  NewDataSet::armorPointDataTable::areaColumn::get() {
    return this->columnarea;
}

inline ::System::Data::DataColumn^  NewDataSet::armorPointDataTable::armorPoint_textColumn::get() {
    return this->columnarmorPoint_text;
}

inline ::System::Data::DataColumn^  NewDataSet::armorPointDataTable::armor_IdColumn::get() {
    return this->columnarmor_Id;
}

inline ::System::Int32 NewDataSet::armorPointDataTable::Count::get() {
    return this->Rows->Count;
}

inline NewDataSet::armorPointRow^  NewDataSet::armorPointDataTable::default::get(::System::Int32 index) {
    return (cli::safe_cast<NewDataSet::armorPointRow^  >(this->Rows[index]));
}

inline ::System::Void NewDataSet::armorPointDataTable::AddarmorPointRow(NewDataSet::armorPointRow^  row) {
    this->Rows->Add(row);
}

inline NewDataSet::armorPointRow^  NewDataSet::armorPointDataTable::AddarmorPointRow(System::UInt64 area, System::UInt64 armorPoint_text, 
            NewDataSet::armorRow^  parentarmorRowByarmor_armorPoint) {
    NewDataSet::armorPointRow^  rowarmorPointRow = (cli::safe_cast<NewDataSet::armorPointRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(3) {area, armorPoint_text, 
        nullptr};
    if (parentarmorRowByarmor_armorPoint != nullptr) {
        columnValuesArray[2] = parentarmorRowByarmor_armorPoint[7];
    }
    rowarmorPointRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowarmorPointRow);
    return rowarmorPointRow;
}

inline ::System::Collections::IEnumerator^  NewDataSet::armorPointDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  NewDataSet::armorPointDataTable::Clone() {
    NewDataSet::armorPointDataTable^  cln = (cli::safe_cast<NewDataSet::armorPointDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  NewDataSet::armorPointDataTable::CreateInstance() {
    return (gcnew NewDataSet::armorPointDataTable());
}

inline ::System::Void NewDataSet::armorPointDataTable::InitVars() {
    this->columnarea = __super::Columns[L"area"];
    this->columnarmorPoint_text = __super::Columns[L"armorPoint_text"];
    this->columnarmor_Id = __super::Columns[L"armor_Id"];
}

inline ::System::Void NewDataSet::armorPointDataTable::InitClass() {
    this->columnarea = (gcnew ::System::Data::DataColumn(L"area", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnarea);
    this->columnarmorPoint_text = (gcnew ::System::Data::DataColumn(L"armorPoint_text", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::SimpleContent));
    __super::Columns->Add(this->columnarmorPoint_text);
    this->columnarmor_Id = (gcnew ::System::Data::DataColumn(L"armor_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnarmor_Id);
    this->columnarea->Namespace = L"";
    this->columnarmorPoint_text->AllowDBNull = false;
}

inline NewDataSet::armorPointRow^  NewDataSet::armorPointDataTable::NewarmorPointRow() {
    return (cli::safe_cast<NewDataSet::armorPointRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  NewDataSet::armorPointDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew NewDataSet::armorPointRow(builder));
}

inline ::System::Type^  NewDataSet::armorPointDataTable::GetRowType() {
    return NewDataSet::armorPointRow::typeid;
}

inline ::System::Void NewDataSet::armorPointDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->armorPointRowChanged(this, (gcnew NewDataSet::armorPointRowChangeEvent((cli::safe_cast<NewDataSet::armorPointRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::armorPointDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->armorPointRowChanging(this, (gcnew NewDataSet::armorPointRowChangeEvent((cli::safe_cast<NewDataSet::armorPointRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::armorPointDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->armorPointRowDeleted(this, (gcnew NewDataSet::armorPointRowChangeEvent((cli::safe_cast<NewDataSet::armorPointRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::armorPointDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->armorPointRowDeleting(this, (gcnew NewDataSet::armorPointRowChangeEvent((cli::safe_cast<NewDataSet::armorPointRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::armorPointDataTable::RemovearmorPointRow(NewDataSet::armorPointRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::armorPointDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
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
    attribute2->FixedValue = L"armorPointDataTable";
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


inline NewDataSet::malusDataTable::malusDataTable() {
    this->TableName = L"malus";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline NewDataSet::malusDataTable::malusDataTable(::System::Data::DataTable^  table) {
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

inline NewDataSet::malusDataTable::malusDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  NewDataSet::malusDataTable::typeColumn::get() {
    return this->columntype;
}

inline ::System::Data::DataColumn^  NewDataSet::malusDataTable::malus_textColumn::get() {
    return this->columnmalus_text;
}

inline ::System::Data::DataColumn^  NewDataSet::malusDataTable::armor_IdColumn::get() {
    return this->columnarmor_Id;
}

inline ::System::Int32 NewDataSet::malusDataTable::Count::get() {
    return this->Rows->Count;
}

inline NewDataSet::malusRow^  NewDataSet::malusDataTable::default::get(::System::Int32 index) {
    return (cli::safe_cast<NewDataSet::malusRow^  >(this->Rows[index]));
}

inline ::System::Void NewDataSet::malusDataTable::AddmalusRow(NewDataSet::malusRow^  row) {
    this->Rows->Add(row);
}

inline NewDataSet::malusRow^  NewDataSet::malusDataTable::AddmalusRow(System::UInt64 type, System::UInt64 malus_text, NewDataSet::armorRow^  parentarmorRowByarmor_malus) {
    NewDataSet::malusRow^  rowmalusRow = (cli::safe_cast<NewDataSet::malusRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(3) {type, malus_text, nullptr};
    if (parentarmorRowByarmor_malus != nullptr) {
        columnValuesArray[2] = parentarmorRowByarmor_malus[7];
    }
    rowmalusRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowmalusRow);
    return rowmalusRow;
}

inline ::System::Collections::IEnumerator^  NewDataSet::malusDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  NewDataSet::malusDataTable::Clone() {
    NewDataSet::malusDataTable^  cln = (cli::safe_cast<NewDataSet::malusDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  NewDataSet::malusDataTable::CreateInstance() {
    return (gcnew NewDataSet::malusDataTable());
}

inline ::System::Void NewDataSet::malusDataTable::InitVars() {
    this->columntype = __super::Columns[L"type"];
    this->columnmalus_text = __super::Columns[L"malus_text"];
    this->columnarmor_Id = __super::Columns[L"armor_Id"];
}

inline ::System::Void NewDataSet::malusDataTable::InitClass() {
    this->columntype = (gcnew ::System::Data::DataColumn(L"type", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columntype);
    this->columnmalus_text = (gcnew ::System::Data::DataColumn(L"malus_text", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::SimpleContent));
    __super::Columns->Add(this->columnmalus_text);
    this->columnarmor_Id = (gcnew ::System::Data::DataColumn(L"armor_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnarmor_Id);
    this->columntype->Namespace = L"";
    this->columnmalus_text->AllowDBNull = false;
}

inline NewDataSet::malusRow^  NewDataSet::malusDataTable::NewmalusRow() {
    return (cli::safe_cast<NewDataSet::malusRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  NewDataSet::malusDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew NewDataSet::malusRow(builder));
}

inline ::System::Type^  NewDataSet::malusDataTable::GetRowType() {
    return NewDataSet::malusRow::typeid;
}

inline ::System::Void NewDataSet::malusDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->malusRowChanged(this, (gcnew NewDataSet::malusRowChangeEvent((cli::safe_cast<NewDataSet::malusRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::malusDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->malusRowChanging(this, (gcnew NewDataSet::malusRowChangeEvent((cli::safe_cast<NewDataSet::malusRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::malusDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->malusRowDeleted(this, (gcnew NewDataSet::malusRowChangeEvent((cli::safe_cast<NewDataSet::malusRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::malusDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->malusRowDeleting(this, (gcnew NewDataSet::malusRowChangeEvent((cli::safe_cast<NewDataSet::malusRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::malusDataTable::RemovemalusRow(NewDataSet::malusRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::malusDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
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
    attribute2->FixedValue = L"malusDataTable";
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


inline NewDataSet::armorDataTable::armorDataTable() {
    this->TableName = L"armor";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline NewDataSet::armorDataTable::armorDataTable(::System::Data::DataTable^  table) {
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

inline NewDataSet::armorDataTable::armorDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  NewDataSet::armorDataTable::codeColumn::get() {
    return this->columncode;
}

inline ::System::Data::DataColumn^  NewDataSet::armorDataTable::nameColumn::get() {
    return this->columnname;
}

inline ::System::Data::DataColumn^  NewDataSet::armorDataTable::crownColumn::get() {
    return this->columncrown;
}

inline ::System::Data::DataColumn^  NewDataSet::armorDataTable::pennyColumn::get() {
    return this->columnpenny;
}

inline ::System::Data::DataColumn^  NewDataSet::armorDataTable::schilingColumn::get() {
    return this->columnschiling;
}

inline ::System::Data::DataColumn^  NewDataSet::armorDataTable::dimensionColumn::get() {
    return this->columndimension;
}

inline ::System::Data::DataColumn^  NewDataSet::armorDataTable::rarityColumn::get() {
    return this->columnrarity;
}

inline ::System::Data::DataColumn^  NewDataSet::armorDataTable::armor_IdColumn::get() {
    return this->columnarmor_Id;
}

inline ::System::Data::DataColumn^  NewDataSet::armorDataTable::armorDB_IdColumn::get() {
    return this->columnarmorDB_Id;
}

inline ::System::Int32 NewDataSet::armorDataTable::Count::get() {
    return this->Rows->Count;
}

inline NewDataSet::armorRow^  NewDataSet::armorDataTable::default::get(::System::Int32 index) {
    return (cli::safe_cast<NewDataSet::armorRow^  >(this->Rows[index]));
}

inline ::System::Void NewDataSet::armorDataTable::AddarmorRow(NewDataSet::armorRow^  row) {
    this->Rows->Add(row);
}

inline NewDataSet::armorRow^  NewDataSet::armorDataTable::AddarmorRow(
            System::String^  code, 
            System::String^  name, 
            System::UInt64 crown, 
            System::UInt64 penny, 
            System::UInt64 schiling, 
            System::UInt64 dimension, 
            System::String^  rarity, 
            NewDataSet::armorDBRow^  parentarmorDBRowByarmorDB_armor) {
    NewDataSet::armorRow^  rowarmorRow = (cli::safe_cast<NewDataSet::armorRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(9) {code, name, crown, penny, 
        schiling, dimension, rarity, nullptr, nullptr};
    if (parentarmorDBRowByarmorDB_armor != nullptr) {
        columnValuesArray[8] = parentarmorDBRowByarmorDB_armor[0];
    }
    rowarmorRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowarmorRow);
    return rowarmorRow;
}

inline ::System::Collections::IEnumerator^  NewDataSet::armorDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  NewDataSet::armorDataTable::Clone() {
    NewDataSet::armorDataTable^  cln = (cli::safe_cast<NewDataSet::armorDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  NewDataSet::armorDataTable::CreateInstance() {
    return (gcnew NewDataSet::armorDataTable());
}

inline ::System::Void NewDataSet::armorDataTable::InitVars() {
    this->columncode = __super::Columns[L"code"];
    this->columnname = __super::Columns[L"name"];
    this->columncrown = __super::Columns[L"crown"];
    this->columnpenny = __super::Columns[L"penny"];
    this->columnschiling = __super::Columns[L"schiling"];
    this->columndimension = __super::Columns[L"dimension"];
    this->columnrarity = __super::Columns[L"rarity"];
    this->columnarmor_Id = __super::Columns[L"armor_Id"];
    this->columnarmorDB_Id = __super::Columns[L"armorDB_Id"];
}

inline ::System::Void NewDataSet::armorDataTable::InitClass() {
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
    this->columndimension = (gcnew ::System::Data::DataColumn(L"dimension", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Element));
    __super::Columns->Add(this->columndimension);
    this->columnrarity = (gcnew ::System::Data::DataColumn(L"rarity", ::System::String::typeid, nullptr, ::System::Data::MappingType::Element));
    __super::Columns->Add(this->columnrarity);
    this->columnarmor_Id = (gcnew ::System::Data::DataColumn(L"armor_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnarmor_Id);
    this->columnarmorDB_Id = (gcnew ::System::Data::DataColumn(L"armorDB_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnarmorDB_Id);
    this->Constraints->Add((gcnew ::System::Data::UniqueConstraint(L"Constraint1", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->columnarmor_Id}, 
            true)));
    this->columncode->Namespace = L"";
    this->columnname->AllowDBNull = false;
    this->columncrown->AllowDBNull = false;
    this->columnpenny->AllowDBNull = false;
    this->columnschiling->AllowDBNull = false;
    this->columndimension->AllowDBNull = false;
    this->columnrarity->AllowDBNull = false;
    this->columnarmor_Id->AutoIncrement = true;
    this->columnarmor_Id->AllowDBNull = false;
    this->columnarmor_Id->Unique = true;
}

inline NewDataSet::armorRow^  NewDataSet::armorDataTable::NewarmorRow() {
    return (cli::safe_cast<NewDataSet::armorRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  NewDataSet::armorDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew NewDataSet::armorRow(builder));
}

inline ::System::Type^  NewDataSet::armorDataTable::GetRowType() {
    return NewDataSet::armorRow::typeid;
}

inline ::System::Void NewDataSet::armorDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->armorRowChanged(this, (gcnew NewDataSet::armorRowChangeEvent((cli::safe_cast<NewDataSet::armorRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::armorDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->armorRowChanging(this, (gcnew NewDataSet::armorRowChangeEvent((cli::safe_cast<NewDataSet::armorRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::armorDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->armorRowDeleted(this, (gcnew NewDataSet::armorRowChangeEvent((cli::safe_cast<NewDataSet::armorRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::armorDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->armorRowDeleting(this, (gcnew NewDataSet::armorRowChangeEvent((cli::safe_cast<NewDataSet::armorRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::armorDataTable::RemovearmorRow(NewDataSet::armorRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::armorDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
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
    attribute2->FixedValue = L"armorDataTable";
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


inline NewDataSet::armorDBDataTable::armorDBDataTable() {
    this->TableName = L"armorDB";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline NewDataSet::armorDBDataTable::armorDBDataTable(::System::Data::DataTable^  table) {
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

inline NewDataSet::armorDBDataTable::armorDBDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  NewDataSet::armorDBDataTable::armorDB_IdColumn::get() {
    return this->columnarmorDB_Id;
}

inline ::System::Int32 NewDataSet::armorDBDataTable::Count::get() {
    return this->Rows->Count;
}

inline NewDataSet::armorDBRow^  NewDataSet::armorDBDataTable::default::get(::System::Int32 index) {
    return (cli::safe_cast<NewDataSet::armorDBRow^  >(this->Rows[index]));
}

inline ::System::Void NewDataSet::armorDBDataTable::AddarmorDBRow(NewDataSet::armorDBRow^  row) {
    this->Rows->Add(row);
}

inline NewDataSet::armorDBRow^  NewDataSet::armorDBDataTable::AddarmorDBRow() {
    NewDataSet::armorDBRow^  rowarmorDBRow = (cli::safe_cast<NewDataSet::armorDBRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(1) {nullptr};
    rowarmorDBRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowarmorDBRow);
    return rowarmorDBRow;
}

inline ::System::Collections::IEnumerator^  NewDataSet::armorDBDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  NewDataSet::armorDBDataTable::Clone() {
    NewDataSet::armorDBDataTable^  cln = (cli::safe_cast<NewDataSet::armorDBDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  NewDataSet::armorDBDataTable::CreateInstance() {
    return (gcnew NewDataSet::armorDBDataTable());
}

inline ::System::Void NewDataSet::armorDBDataTable::InitVars() {
    this->columnarmorDB_Id = __super::Columns[L"armorDB_Id"];
}

inline ::System::Void NewDataSet::armorDBDataTable::InitClass() {
    this->columnarmorDB_Id = (gcnew ::System::Data::DataColumn(L"armorDB_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnarmorDB_Id);
    this->Constraints->Add((gcnew ::System::Data::UniqueConstraint(L"Constraint1", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->columnarmorDB_Id}, 
            true)));
    this->columnarmorDB_Id->AutoIncrement = true;
    this->columnarmorDB_Id->AllowDBNull = false;
    this->columnarmorDB_Id->Unique = true;
}

inline NewDataSet::armorDBRow^  NewDataSet::armorDBDataTable::NewarmorDBRow() {
    return (cli::safe_cast<NewDataSet::armorDBRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  NewDataSet::armorDBDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew NewDataSet::armorDBRow(builder));
}

inline ::System::Type^  NewDataSet::armorDBDataTable::GetRowType() {
    return NewDataSet::armorDBRow::typeid;
}

inline ::System::Void NewDataSet::armorDBDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->armorDBRowChanged(this, (gcnew NewDataSet::armorDBRowChangeEvent((cli::safe_cast<NewDataSet::armorDBRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::armorDBDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->armorDBRowChanging(this, (gcnew NewDataSet::armorDBRowChangeEvent((cli::safe_cast<NewDataSet::armorDBRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::armorDBDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->armorDBRowDeleted(this, (gcnew NewDataSet::armorDBRowChangeEvent((cli::safe_cast<NewDataSet::armorDBRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::armorDBDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->armorDBRowDeleting(this, (gcnew NewDataSet::armorDBRowChangeEvent((cli::safe_cast<NewDataSet::armorDBRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::armorDBDataTable::RemovearmorDBRow(NewDataSet::armorDBRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::armorDBDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
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
    attribute2->FixedValue = L"armorDBDataTable";
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


inline NewDataSet::armorPointRow::armorPointRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tablearmorPoint = (cli::safe_cast<NewDataSet::armorPointDataTable^  >(this->Table));
}

inline System::UInt64 NewDataSet::armorPointRow::area::get() {
    try {
        return (cli::safe_cast<::System::UInt64 >(this[this->tablearmorPoint->areaColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"La valeur pour la colonne \'area\' dans la table \'armorPoint\' est DBNull.", 
            e));
    }
}
inline System::Void NewDataSet::armorPointRow::area::set(System::UInt64 value) {
    this[this->tablearmorPoint->areaColumn] = value;
}

inline System::UInt64 NewDataSet::armorPointRow::armorPoint_text::get() {
    return (cli::safe_cast<::System::UInt64 >(this[this->tablearmorPoint->armorPoint_textColumn]));
}
inline System::Void NewDataSet::armorPointRow::armorPoint_text::set(System::UInt64 value) {
    this[this->tablearmorPoint->armorPoint_textColumn] = value;
}

inline System::Int32 NewDataSet::armorPointRow::armor_Id::get() {
    try {
        return (cli::safe_cast<::System::Int32 >(this[this->tablearmorPoint->armor_IdColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"La valeur pour la colonne \'armor_Id\' dans la table \'armorPoint\' est DBNull.", 
            e));
    }
}
inline System::Void NewDataSet::armorPointRow::armor_Id::set(System::Int32 value) {
    this[this->tablearmorPoint->armor_IdColumn] = value;
}

inline NewDataSet::armorRow^  NewDataSet::armorPointRow::armorRow::get() {
    return (cli::safe_cast<NewDataSet::armorRow^  >(this->GetParentRow(this->Table->ParentRelations[L"armor_armorPoint"])));
}
inline System::Void NewDataSet::armorPointRow::armorRow::set(NewDataSet::armorRow^  value) {
    this->SetParentRow(value, this->Table->ParentRelations[L"armor_armorPoint"]);
}

inline ::System::Boolean NewDataSet::armorPointRow::IsareaNull() {
    return this->IsNull(this->tablearmorPoint->areaColumn);
}

inline ::System::Void NewDataSet::armorPointRow::SetareaNull() {
    this[this->tablearmorPoint->areaColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean NewDataSet::armorPointRow::Isarmor_IdNull() {
    return this->IsNull(this->tablearmorPoint->armor_IdColumn);
}

inline ::System::Void NewDataSet::armorPointRow::Setarmor_IdNull() {
    this[this->tablearmorPoint->armor_IdColumn] = ::System::Convert::DBNull;
}


inline NewDataSet::malusRow::malusRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tablemalus = (cli::safe_cast<NewDataSet::malusDataTable^  >(this->Table));
}

inline System::UInt64 NewDataSet::malusRow::type::get() {
    try {
        return (cli::safe_cast<::System::UInt64 >(this[this->tablemalus->typeColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"La valeur pour la colonne \'type\' dans la table \'malus\' est DBNull.", 
            e));
    }
}
inline System::Void NewDataSet::malusRow::type::set(System::UInt64 value) {
    this[this->tablemalus->typeColumn] = value;
}

inline System::UInt64 NewDataSet::malusRow::malus_text::get() {
    return (cli::safe_cast<::System::UInt64 >(this[this->tablemalus->malus_textColumn]));
}
inline System::Void NewDataSet::malusRow::malus_text::set(System::UInt64 value) {
    this[this->tablemalus->malus_textColumn] = value;
}

inline System::Int32 NewDataSet::malusRow::armor_Id::get() {
    try {
        return (cli::safe_cast<::System::Int32 >(this[this->tablemalus->armor_IdColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"La valeur pour la colonne \'armor_Id\' dans la table \'malus\' est DBNull.", 
            e));
    }
}
inline System::Void NewDataSet::malusRow::armor_Id::set(System::Int32 value) {
    this[this->tablemalus->armor_IdColumn] = value;
}

inline NewDataSet::armorRow^  NewDataSet::malusRow::armorRow::get() {
    return (cli::safe_cast<NewDataSet::armorRow^  >(this->GetParentRow(this->Table->ParentRelations[L"armor_malus"])));
}
inline System::Void NewDataSet::malusRow::armorRow::set(NewDataSet::armorRow^  value) {
    this->SetParentRow(value, this->Table->ParentRelations[L"armor_malus"]);
}

inline ::System::Boolean NewDataSet::malusRow::IstypeNull() {
    return this->IsNull(this->tablemalus->typeColumn);
}

inline ::System::Void NewDataSet::malusRow::SettypeNull() {
    this[this->tablemalus->typeColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean NewDataSet::malusRow::Isarmor_IdNull() {
    return this->IsNull(this->tablemalus->armor_IdColumn);
}

inline ::System::Void NewDataSet::malusRow::Setarmor_IdNull() {
    this[this->tablemalus->armor_IdColumn] = ::System::Convert::DBNull;
}


inline NewDataSet::armorRow::armorRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tablearmor = (cli::safe_cast<NewDataSet::armorDataTable^  >(this->Table));
}

inline System::String^  NewDataSet::armorRow::code::get() {
    try {
        return (cli::safe_cast<::System::String^  >(this[this->tablearmor->codeColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"La valeur pour la colonne \'code\' dans la table \'armor\' est DBNull.", 
            e));
    }
}
inline System::Void NewDataSet::armorRow::code::set(System::String^  value) {
    this[this->tablearmor->codeColumn] = value;
}

inline System::String^  NewDataSet::armorRow::name::get() {
    return (cli::safe_cast<::System::String^  >(this[this->tablearmor->nameColumn]));
}
inline System::Void NewDataSet::armorRow::name::set(System::String^  value) {
    this[this->tablearmor->nameColumn] = value;
}

inline System::UInt64 NewDataSet::armorRow::crown::get() {
    return (cli::safe_cast<::System::UInt64 >(this[this->tablearmor->crownColumn]));
}
inline System::Void NewDataSet::armorRow::crown::set(System::UInt64 value) {
    this[this->tablearmor->crownColumn] = value;
}

inline System::UInt64 NewDataSet::armorRow::penny::get() {
    return (cli::safe_cast<::System::UInt64 >(this[this->tablearmor->pennyColumn]));
}
inline System::Void NewDataSet::armorRow::penny::set(System::UInt64 value) {
    this[this->tablearmor->pennyColumn] = value;
}

inline System::UInt64 NewDataSet::armorRow::schiling::get() {
    return (cli::safe_cast<::System::UInt64 >(this[this->tablearmor->schilingColumn]));
}
inline System::Void NewDataSet::armorRow::schiling::set(System::UInt64 value) {
    this[this->tablearmor->schilingColumn] = value;
}

inline System::UInt64 NewDataSet::armorRow::dimension::get() {
    return (cli::safe_cast<::System::UInt64 >(this[this->tablearmor->dimensionColumn]));
}
inline System::Void NewDataSet::armorRow::dimension::set(System::UInt64 value) {
    this[this->tablearmor->dimensionColumn] = value;
}

inline System::String^  NewDataSet::armorRow::rarity::get() {
    return (cli::safe_cast<::System::String^  >(this[this->tablearmor->rarityColumn]));
}
inline System::Void NewDataSet::armorRow::rarity::set(System::String^  value) {
    this[this->tablearmor->rarityColumn] = value;
}

inline System::Int32 NewDataSet::armorRow::armor_Id::get() {
    return (cli::safe_cast<::System::Int32 >(this[this->tablearmor->armor_IdColumn]));
}
inline System::Void NewDataSet::armorRow::armor_Id::set(System::Int32 value) {
    this[this->tablearmor->armor_IdColumn] = value;
}

inline System::Int32 NewDataSet::armorRow::armorDB_Id::get() {
    try {
        return (cli::safe_cast<::System::Int32 >(this[this->tablearmor->armorDB_IdColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"La valeur pour la colonne \'armorDB_Id\' dans la table \'armor\' est DBNull.", 
            e));
    }
}
inline System::Void NewDataSet::armorRow::armorDB_Id::set(System::Int32 value) {
    this[this->tablearmor->armorDB_IdColumn] = value;
}

inline NewDataSet::armorDBRow^  NewDataSet::armorRow::armorDBRow::get() {
    return (cli::safe_cast<NewDataSet::armorDBRow^  >(this->GetParentRow(this->Table->ParentRelations[L"armorDB_armor"])));
}
inline System::Void NewDataSet::armorRow::armorDBRow::set(NewDataSet::armorDBRow^  value) {
    this->SetParentRow(value, this->Table->ParentRelations[L"armorDB_armor"]);
}

inline ::System::Boolean NewDataSet::armorRow::IscodeNull() {
    return this->IsNull(this->tablearmor->codeColumn);
}

inline ::System::Void NewDataSet::armorRow::SetcodeNull() {
    this[this->tablearmor->codeColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean NewDataSet::armorRow::IsarmorDB_IdNull() {
    return this->IsNull(this->tablearmor->armorDB_IdColumn);
}

inline ::System::Void NewDataSet::armorRow::SetarmorDB_IdNull() {
    this[this->tablearmor->armorDB_IdColumn] = ::System::Convert::DBNull;
}

inline cli::array< NewDataSet::armorPointRow^  >^  NewDataSet::armorRow::GetarmorPointRows() {
    if (this->Table->ChildRelations[L"armor_armorPoint"] == nullptr) {
        return gcnew cli::array< NewDataSet::armorPointRow^  >(0);
    }
    else {
        return (cli::safe_cast<cli::array< NewDataSet::armorPointRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"armor_armorPoint"])));
    }
}

inline cli::array< NewDataSet::malusRow^  >^  NewDataSet::armorRow::GetmalusRows() {
    if (this->Table->ChildRelations[L"armor_malus"] == nullptr) {
        return gcnew cli::array< NewDataSet::malusRow^  >(0);
    }
    else {
        return (cli::safe_cast<cli::array< NewDataSet::malusRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"armor_malus"])));
    }
}


inline NewDataSet::armorDBRow::armorDBRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tablearmorDB = (cli::safe_cast<NewDataSet::armorDBDataTable^  >(this->Table));
}

inline System::Int32 NewDataSet::armorDBRow::armorDB_Id::get() {
    return (cli::safe_cast<::System::Int32 >(this[this->tablearmorDB->armorDB_IdColumn]));
}
inline System::Void NewDataSet::armorDBRow::armorDB_Id::set(System::Int32 value) {
    this[this->tablearmorDB->armorDB_IdColumn] = value;
}

inline cli::array< NewDataSet::armorRow^  >^  NewDataSet::armorDBRow::GetarmorRows() {
    if (this->Table->ChildRelations[L"armorDB_armor"] == nullptr) {
        return gcnew cli::array< NewDataSet::armorRow^  >(0);
    }
    else {
        return (cli::safe_cast<cli::array< NewDataSet::armorRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"armorDB_armor"])));
    }
}


inline NewDataSet::armorPointRowChangeEvent::armorPointRowChangeEvent(NewDataSet::armorPointRow^  row, ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline NewDataSet::armorPointRow^  NewDataSet::armorPointRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction NewDataSet::armorPointRowChangeEvent::Action::get() {
    return this->eventAction;
}


inline NewDataSet::malusRowChangeEvent::malusRowChangeEvent(NewDataSet::malusRow^  row, ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline NewDataSet::malusRow^  NewDataSet::malusRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction NewDataSet::malusRowChangeEvent::Action::get() {
    return this->eventAction;
}


inline NewDataSet::armorRowChangeEvent::armorRowChangeEvent(NewDataSet::armorRow^  row, ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline NewDataSet::armorRow^  NewDataSet::armorRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction NewDataSet::armorRowChangeEvent::Action::get() {
    return this->eventAction;
}


inline NewDataSet::armorDBRowChangeEvent::armorDBRowChangeEvent(NewDataSet::armorDBRow^  row, ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline NewDataSet::armorDBRow^  NewDataSet::armorDBRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction NewDataSet::armorDBRowChangeEvent::Action::get() {
    return this->eventAction;
}
