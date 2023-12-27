/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHelp;
    QAction *actionAboutHeimdall;
    QAction *actionDonate;
    QAction *actionPackage_Creation;
    QAction *actionVerboseOutput;
    QAction *actionResumeConnection;
    QWidget *centralWidget;
    QTabWidget *functionTabWidget;
    QWidget *loadPackageTab;
    QGroupBox *includedFilesGroup;
    QListWidget *includedFilesListWidget;
    QGroupBox *platformGroup;
    QLineEdit *platformLineEdit;
    QGroupBox *supportedDevicesGroup;
    QListWidget *supportedDevicesListWidget;
    QRadioButton *repartitionRadioButton;
    QPushButton *loadFirmwareButton;
    QGroupBox *firmwareNameGroup;
    QLineEdit *firmwareNameLineEdit;
    QGroupBox *firmwarePackageGroup;
    QLineEdit *firmwarePackageLineEdit;
    QPushButton *browseFirmwarePackageButton;
    QGroupBox *versionGroup;
    QLineEdit *versionLineEdit;
    QGroupBox *developerGroup;
    QLineEdit *developerNamesLineEdit;
    QPushButton *developerDonateButton;
    QPushButton *developerHomepageButton;
    QRadioButton *noRebootRadioButton;
    QWidget *flashTab;
    QGroupBox *statusGroup;
    QProgressBar *flashProgressBar;
    QPlainTextEdit *outputPlainTextEdit;
    QLabel *flashLabel;
    QGroupBox *optionsGroup;
    QGroupBox *pitGroup;
    QLineEdit *pitLineEdit;
    QPushButton *pitBrowseButton;
    QLabel *pitBrowseTipLabel;
    QCheckBox *repartitionCheckBox;
    QGroupBox *partitionGroup;
    QComboBox *partitionNameComboBox;
    QLabel *partitionNameLabel;
    QLabel *partitionIdLabel;
    QGroupBox *partitionFileGroup;
    QLineEdit *partitionFileLineEdit;
    QPushButton *partitionFileBrowseButton;
    QLineEdit *partitionIdLineEdit;
    QGroupBox *partitionsGroup;
    QPushButton *addPartitionButton;
    QListWidget *partitionsListWidget;
    QPushButton *removePartitionButton;
    QLabel *addPartitionTipLabel;
    QGroupBox *sessionGroup;
    QCheckBox *noRebootCheckBox;
    QCheckBox *resumeCheckbox;
    QPushButton *startFlashButton;
    QLabel *startFlashTipLabel;
    QWidget *createPackageTab;
    QGroupBox *createSupportedDevicesGroup;
    QListWidget *createDevicesListWidget;
    QPushButton *removeDeviceButton;
    QGroupBox *createFirmwareVersionGroup;
    QLineEdit *createFirmwareVersionLineEdit;
    QGroupBox *createPlatformNameGroup;
    QLineEdit *createPlatformNameLineEdit;
    QGroupBox *createFirmwareNameGroup;
    QLineEdit *createFirmwareNameLineEdit;
    QGroupBox *createDevelopersGroup;
    QListWidget *createDevelopersListWidget;
    QGroupBox *createDeveloperInfoGroup;
    QLabel *createDeveloperNameLabel;
    QLineEdit *createDeveloperNameLineEdit;
    QPushButton *addDeveloperButton;
    QPushButton *removeDeveloperButton;
    QGroupBox *createUrlsGroup;
    QLabel *createDonateLabel;
    QLabel *createHomepageLabel;
    QLineEdit *createHomepageLineEdit;
    QLineEdit *createDonateLineEdit;
    QGroupBox *createPlatformVersionGroup;
    QLineEdit *createPlatformVersionLineEdit;
    QGroupBox *createDeviceInfoGroup;
    QLabel *deviceNameLabel;
    QLineEdit *deviceNameLineEdit;
    QLabel *deviceManufacturerLabel;
    QLineEdit *deviceManufacturerLineEdit;
    QLabel *productCodeLabel;
    QLineEdit *deviceProductCodeLineEdit;
    QPushButton *addDeviceButton;
    QPushButton *buildPackageButton;
    QWidget *tab;
    QGroupBox *downloadPitGroup;
    QGroupBox *pitDestinationGroup;
    QLineEdit *pitDestinationLineEdit;
    QPushButton *pitSaveAsButton;
    QPushButton *downloadPitButton;
    QLabel *downloadPitTipLabel;
    QGroupBox *outputGroup;
    QPlainTextEdit *utilityOutputPlainTextEdit;
    QGroupBox *detectDeviceGroup;
    QPushButton *detectDeviceButton;
    QRadioButton *deviceDetectedRadioButton;
    QLabel *detectDeviceTipLabel;
    QGroupBox *printPitGroup;
    QPushButton *printPitButton;
    QLabel *printPitTipLabel;
    QRadioButton *printPitDeviceRadioBox;
    QRadioButton *printPitLocalFileRadioBox;
    QGroupBox *printLocalPitGroup;
    QLineEdit *printLocalPitLineEdit;
    QPushButton *printLocalPitBrowseButton;
    QGroupBox *closePcScreenGroup;
    QPushButton *closePcScreenButton;
    QLabel *closePcScreenTipLabel;
    QMenuBar *menuBar;
    QMenu *menuHelp;
    QMenu *menuDonate;
    QMenu *menuAdvanced;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(788, 525);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(788, 525));
        MainWindow->setMaximumSize(QSize(788, 525));
        MainWindow->setWindowTitle(QString::fromUtf8("Heimdall Frontend"));
#if QT_CONFIG(tooltip)
        MainWindow->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        MainWindow->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        MainWindow->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        MainWindow->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        MainWindow->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        MainWindow->setWindowFilePath(QString::fromUtf8(""));
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionAboutHeimdall = new QAction(MainWindow);
        actionAboutHeimdall->setObjectName(QString::fromUtf8("actionAboutHeimdall"));
        actionDonate = new QAction(MainWindow);
        actionDonate->setObjectName(QString::fromUtf8("actionDonate"));
        actionPackage_Creation = new QAction(MainWindow);
        actionPackage_Creation->setObjectName(QString::fromUtf8("actionPackage_Creation"));
        actionVerboseOutput = new QAction(MainWindow);
        actionVerboseOutput->setObjectName(QString::fromUtf8("actionVerboseOutput"));
        actionVerboseOutput->setCheckable(true);
        actionResumeConnection = new QAction(MainWindow);
        actionResumeConnection->setObjectName(QString::fromUtf8("actionResumeConnection"));
        actionResumeConnection->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        functionTabWidget = new QTabWidget(centralWidget);
        functionTabWidget->setObjectName(QString::fromUtf8("functionTabWidget"));
        functionTabWidget->setEnabled(true);
        functionTabWidget->setGeometry(QRect(5, 0, 780, 501));
        sizePolicy.setHeightForWidth(functionTabWidget->sizePolicy().hasHeightForWidth());
        functionTabWidget->setSizePolicy(sizePolicy);
        functionTabWidget->setMinimumSize(QSize(780, 0));
        functionTabWidget->setMaximumSize(QSize(780, 780));
        functionTabWidget->setUsesScrollButtons(false);
        loadPackageTab = new QWidget();
        loadPackageTab->setObjectName(QString::fromUtf8("loadPackageTab"));
        includedFilesGroup = new QGroupBox(loadPackageTab);
        includedFilesGroup->setObjectName(QString::fromUtf8("includedFilesGroup"));
        includedFilesGroup->setGeometry(QRect(510, 10, 251, 331));
        includedFilesListWidget = new QListWidget(includedFilesGroup);
        includedFilesListWidget->setObjectName(QString::fromUtf8("includedFilesListWidget"));
        includedFilesListWidget->setGeometry(QRect(10, 30, 231, 291));
        platformGroup = new QGroupBox(loadPackageTab);
        platformGroup->setObjectName(QString::fromUtf8("platformGroup"));
        platformGroup->setGeometry(QRect(340, 80, 161, 61));
        platformLineEdit = new QLineEdit(platformGroup);
        platformLineEdit->setObjectName(QString::fromUtf8("platformLineEdit"));
        platformLineEdit->setEnabled(false);
        platformLineEdit->setGeometry(QRect(10, 30, 141, 21));
        platformLineEdit->setReadOnly(true);
        supportedDevicesGroup = new QGroupBox(loadPackageTab);
        supportedDevicesGroup->setObjectName(QString::fromUtf8("supportedDevicesGroup"));
        supportedDevicesGroup->setGeometry(QRect(10, 220, 491, 241));
        supportedDevicesListWidget = new QListWidget(supportedDevicesGroup);
        supportedDevicesListWidget->setObjectName(QString::fromUtf8("supportedDevicesListWidget"));
        supportedDevicesListWidget->setGeometry(QRect(10, 30, 471, 201));
        repartitionRadioButton = new QRadioButton(loadPackageTab);
        repartitionRadioButton->setObjectName(QString::fromUtf8("repartitionRadioButton"));
        repartitionRadioButton->setEnabled(false);
        repartitionRadioButton->setGeometry(QRect(520, 360, 241, 21));
        loadFirmwareButton = new QPushButton(loadPackageTab);
        loadFirmwareButton->setObjectName(QString::fromUtf8("loadFirmwareButton"));
        loadFirmwareButton->setEnabled(false);
        loadFirmwareButton->setGeometry(QRect(550, 420, 171, 31));
        loadFirmwareButton->setFocusPolicy(Qt::NoFocus);
        firmwareNameGroup = new QGroupBox(loadPackageTab);
        firmwareNameGroup->setObjectName(QString::fromUtf8("firmwareNameGroup"));
        firmwareNameGroup->setGeometry(QRect(10, 80, 211, 61));
        firmwareNameLineEdit = new QLineEdit(firmwareNameGroup);
        firmwareNameLineEdit->setObjectName(QString::fromUtf8("firmwareNameLineEdit"));
        firmwareNameLineEdit->setEnabled(false);
        firmwareNameLineEdit->setGeometry(QRect(10, 30, 191, 21));
        firmwareNameLineEdit->setReadOnly(true);
        firmwarePackageGroup = new QGroupBox(loadPackageTab);
        firmwarePackageGroup->setObjectName(QString::fromUtf8("firmwarePackageGroup"));
        firmwarePackageGroup->setGeometry(QRect(10, 10, 491, 61));
        firmwarePackageLineEdit = new QLineEdit(firmwarePackageGroup);
        firmwarePackageLineEdit->setObjectName(QString::fromUtf8("firmwarePackageLineEdit"));
        firmwarePackageLineEdit->setEnabled(false);
        firmwarePackageLineEdit->setGeometry(QRect(10, 30, 391, 21));
        firmwarePackageLineEdit->setReadOnly(true);
        browseFirmwarePackageButton = new QPushButton(firmwarePackageGroup);
        browseFirmwarePackageButton->setObjectName(QString::fromUtf8("browseFirmwarePackageButton"));
        browseFirmwarePackageButton->setEnabled(true);
        browseFirmwarePackageButton->setGeometry(QRect(410, 30, 71, 23));
        browseFirmwarePackageButton->setFocusPolicy(Qt::NoFocus);
        versionGroup = new QGroupBox(loadPackageTab);
        versionGroup->setObjectName(QString::fromUtf8("versionGroup"));
        versionGroup->setGeometry(QRect(230, 80, 101, 61));
        versionLineEdit = new QLineEdit(versionGroup);
        versionLineEdit->setObjectName(QString::fromUtf8("versionLineEdit"));
        versionLineEdit->setEnabled(false);
        versionLineEdit->setGeometry(QRect(10, 30, 81, 21));
        versionLineEdit->setReadOnly(true);
        developerGroup = new QGroupBox(loadPackageTab);
        developerGroup->setObjectName(QString::fromUtf8("developerGroup"));
        developerGroup->setGeometry(QRect(10, 150, 491, 61));
        developerNamesLineEdit = new QLineEdit(developerGroup);
        developerNamesLineEdit->setObjectName(QString::fromUtf8("developerNamesLineEdit"));
        developerNamesLineEdit->setEnabled(false);
        developerNamesLineEdit->setGeometry(QRect(10, 30, 281, 21));
        developerNamesLineEdit->setReadOnly(true);
        developerDonateButton = new QPushButton(developerGroup);
        developerDonateButton->setObjectName(QString::fromUtf8("developerDonateButton"));
        developerDonateButton->setEnabled(false);
        developerDonateButton->setGeometry(QRect(410, 30, 71, 23));
        developerDonateButton->setFocusPolicy(Qt::NoFocus);
        developerHomepageButton = new QPushButton(developerGroup);
        developerHomepageButton->setObjectName(QString::fromUtf8("developerHomepageButton"));
        developerHomepageButton->setEnabled(false);
        developerHomepageButton->setGeometry(QRect(300, 30, 101, 23));
        developerHomepageButton->setFocusPolicy(Qt::NoFocus);
        noRebootRadioButton = new QRadioButton(loadPackageTab);
        noRebootRadioButton->setObjectName(QString::fromUtf8("noRebootRadioButton"));
        noRebootRadioButton->setEnabled(false);
        noRebootRadioButton->setGeometry(QRect(520, 390, 241, 21));
        functionTabWidget->addTab(loadPackageTab, QString());
        flashTab = new QWidget();
        flashTab->setObjectName(QString::fromUtf8("flashTab"));
        statusGroup = new QGroupBox(flashTab);
        statusGroup->setObjectName(QString::fromUtf8("statusGroup"));
        statusGroup->setGeometry(QRect(10, 300, 511, 171));
        flashProgressBar = new QProgressBar(statusGroup);
        flashProgressBar->setObjectName(QString::fromUtf8("flashProgressBar"));
        flashProgressBar->setEnabled(false);
        flashProgressBar->setGeometry(QRect(280, 130, 221, 31));
        flashProgressBar->setValue(0);
        outputPlainTextEdit = new QPlainTextEdit(statusGroup);
        outputPlainTextEdit->setObjectName(QString::fromUtf8("outputPlainTextEdit"));
        outputPlainTextEdit->setEnabled(true);
        outputPlainTextEdit->setGeometry(QRect(10, 30, 491, 81));
        outputPlainTextEdit->setUndoRedoEnabled(false);
        outputPlainTextEdit->setReadOnly(true);
        outputPlainTextEdit->setPlainText(QString::fromUtf8(""));
        flashLabel = new QLabel(statusGroup);
        flashLabel->setObjectName(QString::fromUtf8("flashLabel"));
        flashLabel->setGeometry(QRect(10, 130, 261, 21));
        flashLabel->setLayoutDirection(Qt::RightToLeft);
        flashLabel->setText(QString::fromUtf8("Ready"));
        flashLabel->setTextFormat(Qt::PlainText);
        flashLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        optionsGroup = new QGroupBox(flashTab);
        optionsGroup->setObjectName(QString::fromUtf8("optionsGroup"));
        optionsGroup->setGeometry(QRect(10, 10, 751, 281));
        pitGroup = new QGroupBox(optionsGroup);
        pitGroup->setObjectName(QString::fromUtf8("pitGroup"));
        pitGroup->setGeometry(QRect(10, 20, 391, 91));
        pitLineEdit = new QLineEdit(pitGroup);
        pitLineEdit->setObjectName(QString::fromUtf8("pitLineEdit"));
        pitLineEdit->setEnabled(false);
        pitLineEdit->setGeometry(QRect(10, 30, 261, 21));
        pitLineEdit->setReadOnly(true);
        pitBrowseButton = new QPushButton(pitGroup);
        pitBrowseButton->setObjectName(QString::fromUtf8("pitBrowseButton"));
        pitBrowseButton->setEnabled(true);
        pitBrowseButton->setGeometry(QRect(280, 30, 71, 23));
        pitBrowseButton->setFocusPolicy(Qt::NoFocus);
        pitBrowseButton->setAutoDefault(false);
        pitBrowseButton->setFlat(false);
        pitBrowseTipLabel = new QLabel(pitGroup);
        pitBrowseTipLabel->setObjectName(QString::fromUtf8("pitBrowseTipLabel"));
        pitBrowseTipLabel->setEnabled(true);
        pitBrowseTipLabel->setGeometry(QRect(360, 30, 21, 23));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pitBrowseTipLabel->setFont(font);
#if QT_CONFIG(tooltip)
        pitBrowseTipLabel->setToolTip(QString::fromUtf8("You can retrieve/download your device's PIT file from the Utilities tab."));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pitBrowseTipLabel->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pitBrowseTipLabel->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
        pitBrowseTipLabel->setFrameShape(QFrame::Panel);
        pitBrowseTipLabel->setFrameShadow(QFrame::Raised);
        pitBrowseTipLabel->setLineWidth(2);
        pitBrowseTipLabel->setMidLineWidth(0);
        pitBrowseTipLabel->setAlignment(Qt::AlignCenter);
        repartitionCheckBox = new QCheckBox(pitGroup);
        repartitionCheckBox->setObjectName(QString::fromUtf8("repartitionCheckBox"));
        repartitionCheckBox->setEnabled(false);
        repartitionCheckBox->setGeometry(QRect(10, 60, 131, 21));
#if QT_CONFIG(tooltip)
        repartitionCheckBox->setToolTip(QString::fromUtf8("Repartitioning will wipe all data for your phone and install the selected PIT file."));
#endif // QT_CONFIG(tooltip)
        partitionGroup = new QGroupBox(optionsGroup);
        partitionGroup->setObjectName(QString::fromUtf8("partitionGroup"));
        partitionGroup->setGeometry(QRect(10, 120, 391, 151));
        partitionNameComboBox = new QComboBox(partitionGroup);
        partitionNameComboBox->setObjectName(QString::fromUtf8("partitionNameComboBox"));
        partitionNameComboBox->setEnabled(false);
        partitionNameComboBox->setGeometry(QRect(140, 30, 241, 22));
        partitionNameLabel = new QLabel(partitionGroup);
        partitionNameLabel->setObjectName(QString::fromUtf8("partitionNameLabel"));
        partitionNameLabel->setGeometry(QRect(10, 30, 121, 16));
        partitionIdLabel = new QLabel(partitionGroup);
        partitionIdLabel->setObjectName(QString::fromUtf8("partitionIdLabel"));
        partitionIdLabel->setGeometry(QRect(10, 60, 121, 16));
        partitionFileGroup = new QGroupBox(partitionGroup);
        partitionFileGroup->setObjectName(QString::fromUtf8("partitionFileGroup"));
        partitionFileGroup->setGeometry(QRect(10, 80, 371, 61));
        partitionFileLineEdit = new QLineEdit(partitionFileGroup);
        partitionFileLineEdit->setObjectName(QString::fromUtf8("partitionFileLineEdit"));
        partitionFileLineEdit->setEnabled(false);
        partitionFileLineEdit->setGeometry(QRect(10, 30, 271, 21));
        partitionFileLineEdit->setReadOnly(true);
        partitionFileBrowseButton = new QPushButton(partitionFileGroup);
        partitionFileBrowseButton->setObjectName(QString::fromUtf8("partitionFileBrowseButton"));
        partitionFileBrowseButton->setEnabled(false);
        partitionFileBrowseButton->setGeometry(QRect(290, 30, 71, 23));
        partitionIdLineEdit = new QLineEdit(partitionGroup);
        partitionIdLineEdit->setObjectName(QString::fromUtf8("partitionIdLineEdit"));
        partitionIdLineEdit->setEnabled(false);
        partitionIdLineEdit->setGeometry(QRect(140, 60, 241, 21));
        partitionIdLineEdit->setReadOnly(true);
        partitionsGroup = new QGroupBox(optionsGroup);
        partitionsGroup->setObjectName(QString::fromUtf8("partitionsGroup"));
        partitionsGroup->setGeometry(QRect(410, 20, 331, 251));
        addPartitionButton = new QPushButton(partitionsGroup);
        addPartitionButton->setObjectName(QString::fromUtf8("addPartitionButton"));
        addPartitionButton->setEnabled(false);
        addPartitionButton->setGeometry(QRect(10, 220, 81, 23));
        partitionsListWidget = new QListWidget(partitionsGroup);
        partitionsListWidget->setObjectName(QString::fromUtf8("partitionsListWidget"));
        partitionsListWidget->setEnabled(false);
        partitionsListWidget->setGeometry(QRect(10, 20, 311, 191));
        removePartitionButton = new QPushButton(partitionsGroup);
        removePartitionButton->setObjectName(QString::fromUtf8("removePartitionButton"));
        removePartitionButton->setEnabled(false);
        removePartitionButton->setGeometry(QRect(240, 220, 81, 23));
        addPartitionTipLabel = new QLabel(partitionsGroup);
        addPartitionTipLabel->setObjectName(QString::fromUtf8("addPartitionTipLabel"));
        addPartitionTipLabel->setGeometry(QRect(100, 220, 21, 23));
        addPartitionTipLabel->setFont(font);
#if QT_CONFIG(tooltip)
        addPartitionTipLabel->setToolTip(QString::fromUtf8("Use the \"Add\" button to add additional files to be flashed."));
#endif // QT_CONFIG(tooltip)
        addPartitionTipLabel->setFrameShape(QFrame::Panel);
        addPartitionTipLabel->setFrameShadow(QFrame::Raised);
        addPartitionTipLabel->setLineWidth(2);
        addPartitionTipLabel->setMidLineWidth(0);
        addPartitionTipLabel->setAlignment(Qt::AlignCenter);
        sessionGroup = new QGroupBox(flashTab);
        sessionGroup->setObjectName(QString::fromUtf8("sessionGroup"));
        sessionGroup->setGeometry(QRect(530, 300, 231, 171));
        noRebootCheckBox = new QCheckBox(sessionGroup);
        noRebootCheckBox->setObjectName(QString::fromUtf8("noRebootCheckBox"));
        noRebootCheckBox->setEnabled(false);
        noRebootCheckBox->setGeometry(QRect(10, 30, 211, 21));
#if QT_CONFIG(tooltip)
        noRebootCheckBox->setToolTip(QString::fromUtf8("Can be enabled to prevent your device rebooting after the flash finishes."));
#endif // QT_CONFIG(tooltip)
        resumeCheckbox = new QCheckBox(sessionGroup);
        resumeCheckbox->setObjectName(QString::fromUtf8("resumeCheckbox"));
        resumeCheckbox->setEnabled(false);
        resumeCheckbox->setGeometry(QRect(10, 60, 211, 21));
#if QT_CONFIG(tooltip)
        resumeCheckbox->setToolTip(QString::fromUtf8("Can be enabled to prevent your device rebooting after the flash finishes."));
#endif // QT_CONFIG(tooltip)
        startFlashButton = new QPushButton(sessionGroup);
        startFlashButton->setObjectName(QString::fromUtf8("startFlashButton"));
        startFlashButton->setEnabled(false);
        startFlashButton->setGeometry(QRect(50, 120, 111, 31));
        startFlashTipLabel = new QLabel(sessionGroup);
        startFlashTipLabel->setObjectName(QString::fromUtf8("startFlashTipLabel"));
        startFlashTipLabel->setGeometry(QRect(170, 120, 21, 23));
        startFlashTipLabel->setFont(font);
#if QT_CONFIG(tooltip)
        startFlashTipLabel->setToolTip(QString::fromUtf8("The \"Start\" button will remain inactive until at least one partition/file is added."));
#endif // QT_CONFIG(tooltip)
        startFlashTipLabel->setFrameShape(QFrame::Panel);
        startFlashTipLabel->setFrameShadow(QFrame::Raised);
        startFlashTipLabel->setLineWidth(2);
        startFlashTipLabel->setMidLineWidth(0);
        startFlashTipLabel->setAlignment(Qt::AlignCenter);
        functionTabWidget->addTab(flashTab, QString());
        createPackageTab = new QWidget();
        createPackageTab->setObjectName(QString::fromUtf8("createPackageTab"));
        createPackageTab->setEnabled(true);
        createSupportedDevicesGroup = new QGroupBox(createPackageTab);
        createSupportedDevicesGroup->setObjectName(QString::fromUtf8("createSupportedDevicesGroup"));
        createSupportedDevicesGroup->setGeometry(QRect(0, 230, 471, 231));
        createDevicesListWidget = new QListWidget(createSupportedDevicesGroup);
        createDevicesListWidget->setObjectName(QString::fromUtf8("createDevicesListWidget"));
        createDevicesListWidget->setGeometry(QRect(10, 30, 451, 161));
        removeDeviceButton = new QPushButton(createSupportedDevicesGroup);
        removeDeviceButton->setObjectName(QString::fromUtf8("removeDeviceButton"));
        removeDeviceButton->setEnabled(false);
        removeDeviceButton->setGeometry(QRect(320, 200, 141, 23));
        removeDeviceButton->setFocusPolicy(Qt::NoFocus);
        createFirmwareVersionGroup = new QGroupBox(createPackageTab);
        createFirmwareVersionGroup->setObjectName(QString::fromUtf8("createFirmwareVersionGroup"));
        createFirmwareVersionGroup->setGeometry(QRect(240, 10, 151, 61));
        createFirmwareVersionLineEdit = new QLineEdit(createFirmwareVersionGroup);
        createFirmwareVersionLineEdit->setObjectName(QString::fromUtf8("createFirmwareVersionLineEdit"));
        createFirmwareVersionLineEdit->setEnabled(true);
        createFirmwareVersionLineEdit->setGeometry(QRect(10, 30, 131, 21));
        createFirmwareVersionLineEdit->setReadOnly(false);
        createPlatformNameGroup = new QGroupBox(createPackageTab);
        createPlatformNameGroup->setObjectName(QString::fromUtf8("createPlatformNameGroup"));
        createPlatformNameGroup->setGeometry(QRect(430, 10, 171, 61));
        createPlatformNameLineEdit = new QLineEdit(createPlatformNameGroup);
        createPlatformNameLineEdit->setObjectName(QString::fromUtf8("createPlatformNameLineEdit"));
        createPlatformNameLineEdit->setEnabled(true);
        createPlatformNameLineEdit->setGeometry(QRect(10, 30, 151, 21));
        createPlatformNameLineEdit->setReadOnly(false);
        createFirmwareNameGroup = new QGroupBox(createPackageTab);
        createFirmwareNameGroup->setObjectName(QString::fromUtf8("createFirmwareNameGroup"));
        createFirmwareNameGroup->setGeometry(QRect(10, 10, 221, 61));
        createFirmwareNameLineEdit = new QLineEdit(createFirmwareNameGroup);
        createFirmwareNameLineEdit->setObjectName(QString::fromUtf8("createFirmwareNameLineEdit"));
        createFirmwareNameLineEdit->setEnabled(true);
        createFirmwareNameLineEdit->setGeometry(QRect(10, 30, 201, 21));
        createFirmwareNameLineEdit->setReadOnly(false);
        createDevelopersGroup = new QGroupBox(createPackageTab);
        createDevelopersGroup->setObjectName(QString::fromUtf8("createDevelopersGroup"));
        createDevelopersGroup->setGeometry(QRect(10, 80, 751, 141));
        createDevelopersListWidget = new QListWidget(createDevelopersGroup);
        createDevelopersListWidget->setObjectName(QString::fromUtf8("createDevelopersListWidget"));
        createDevelopersListWidget->setEnabled(true);
        createDevelopersListWidget->setGeometry(QRect(560, 20, 181, 81));
        createDeveloperInfoGroup = new QGroupBox(createDevelopersGroup);
        createDeveloperInfoGroup->setObjectName(QString::fromUtf8("createDeveloperInfoGroup"));
        createDeveloperInfoGroup->setGeometry(QRect(310, 20, 241, 101));
        createDeveloperNameLabel = new QLabel(createDeveloperInfoGroup);
        createDeveloperNameLabel->setObjectName(QString::fromUtf8("createDeveloperNameLabel"));
        createDeveloperNameLabel->setGeometry(QRect(10, 30, 51, 16));
        createDeveloperNameLineEdit = new QLineEdit(createDeveloperInfoGroup);
        createDeveloperNameLineEdit->setObjectName(QString::fromUtf8("createDeveloperNameLineEdit"));
        createDeveloperNameLineEdit->setEnabled(true);
        createDeveloperNameLineEdit->setGeometry(QRect(70, 30, 161, 21));
        createDeveloperNameLineEdit->setReadOnly(false);
        addDeveloperButton = new QPushButton(createDeveloperInfoGroup);
        addDeveloperButton->setObjectName(QString::fromUtf8("addDeveloperButton"));
        addDeveloperButton->setEnabled(false);
        addDeveloperButton->setGeometry(QRect(130, 60, 101, 23));
        addDeveloperButton->setFocusPolicy(Qt::NoFocus);
        removeDeveloperButton = new QPushButton(createDevelopersGroup);
        removeDeveloperButton->setObjectName(QString::fromUtf8("removeDeveloperButton"));
        removeDeveloperButton->setEnabled(false);
        removeDeveloperButton->setGeometry(QRect(640, 110, 101, 23));
        removeDeveloperButton->setFocusPolicy(Qt::NoFocus);
        createUrlsGroup = new QGroupBox(createDevelopersGroup);
        createUrlsGroup->setObjectName(QString::fromUtf8("createUrlsGroup"));
        createUrlsGroup->setGeometry(QRect(10, 20, 291, 101));
        createDonateLabel = new QLabel(createUrlsGroup);
        createDonateLabel->setObjectName(QString::fromUtf8("createDonateLabel"));
        createDonateLabel->setGeometry(QRect(10, 60, 81, 16));
        createHomepageLabel = new QLabel(createUrlsGroup);
        createHomepageLabel->setObjectName(QString::fromUtf8("createHomepageLabel"));
        createHomepageLabel->setGeometry(QRect(10, 30, 81, 16));
        createHomepageLineEdit = new QLineEdit(createUrlsGroup);
        createHomepageLineEdit->setObjectName(QString::fromUtf8("createHomepageLineEdit"));
        createHomepageLineEdit->setEnabled(true);
        createHomepageLineEdit->setGeometry(QRect(100, 30, 181, 21));
        createHomepageLineEdit->setReadOnly(false);
        createDonateLineEdit = new QLineEdit(createUrlsGroup);
        createDonateLineEdit->setObjectName(QString::fromUtf8("createDonateLineEdit"));
        createDonateLineEdit->setEnabled(true);
        createDonateLineEdit->setGeometry(QRect(100, 60, 181, 21));
        createDonateLineEdit->setReadOnly(false);
        createPlatformVersionGroup = new QGroupBox(createPackageTab);
        createPlatformVersionGroup->setObjectName(QString::fromUtf8("createPlatformVersionGroup"));
        createPlatformVersionGroup->setGeometry(QRect(610, 10, 151, 61));
        createPlatformVersionLineEdit = new QLineEdit(createPlatformVersionGroup);
        createPlatformVersionLineEdit->setObjectName(QString::fromUtf8("createPlatformVersionLineEdit"));
        createPlatformVersionLineEdit->setEnabled(true);
        createPlatformVersionLineEdit->setGeometry(QRect(10, 30, 131, 21));
        createPlatformVersionLineEdit->setReadOnly(false);
        createDeviceInfoGroup = new QGroupBox(createPackageTab);
        createDeviceInfoGroup->setObjectName(QString::fromUtf8("createDeviceInfoGroup"));
        createDeviceInfoGroup->setGeometry(QRect(480, 240, 291, 151));
        deviceNameLabel = new QLabel(createDeviceInfoGroup);
        deviceNameLabel->setObjectName(QString::fromUtf8("deviceNameLabel"));
        deviceNameLabel->setGeometry(QRect(10, 60, 111, 16));
        deviceNameLineEdit = new QLineEdit(createDeviceInfoGroup);
        deviceNameLineEdit->setObjectName(QString::fromUtf8("deviceNameLineEdit"));
        deviceNameLineEdit->setEnabled(true);
        deviceNameLineEdit->setGeometry(QRect(130, 60, 151, 21));
        deviceNameLineEdit->setReadOnly(false);
        deviceManufacturerLabel = new QLabel(createDeviceInfoGroup);
        deviceManufacturerLabel->setObjectName(QString::fromUtf8("deviceManufacturerLabel"));
        deviceManufacturerLabel->setGeometry(QRect(10, 30, 111, 16));
        deviceManufacturerLineEdit = new QLineEdit(createDeviceInfoGroup);
        deviceManufacturerLineEdit->setObjectName(QString::fromUtf8("deviceManufacturerLineEdit"));
        deviceManufacturerLineEdit->setEnabled(true);
        deviceManufacturerLineEdit->setGeometry(QRect(130, 30, 151, 21));
        deviceManufacturerLineEdit->setReadOnly(false);
        productCodeLabel = new QLabel(createDeviceInfoGroup);
        productCodeLabel->setObjectName(QString::fromUtf8("productCodeLabel"));
        productCodeLabel->setGeometry(QRect(10, 90, 111, 16));
        deviceProductCodeLineEdit = new QLineEdit(createDeviceInfoGroup);
        deviceProductCodeLineEdit->setObjectName(QString::fromUtf8("deviceProductCodeLineEdit"));
        deviceProductCodeLineEdit->setEnabled(true);
        deviceProductCodeLineEdit->setGeometry(QRect(130, 90, 151, 21));
        deviceProductCodeLineEdit->setReadOnly(false);
        addDeviceButton = new QPushButton(createDeviceInfoGroup);
        addDeviceButton->setObjectName(QString::fromUtf8("addDeviceButton"));
        addDeviceButton->setEnabled(false);
        addDeviceButton->setGeometry(QRect(160, 120, 121, 23));
        addDeviceButton->setFocusPolicy(Qt::NoFocus);
        buildPackageButton = new QPushButton(createPackageTab);
        buildPackageButton->setObjectName(QString::fromUtf8("buildPackageButton"));
        buildPackageButton->setEnabled(false);
        buildPackageButton->setGeometry(QRect(580, 420, 121, 31));
        buildPackageButton->setFocusPolicy(Qt::NoFocus);
        functionTabWidget->addTab(createPackageTab, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        downloadPitGroup = new QGroupBox(tab);
        downloadPitGroup->setObjectName(QString::fromUtf8("downloadPitGroup"));
        downloadPitGroup->setGeometry(QRect(10, 80, 461, 141));
        pitDestinationGroup = new QGroupBox(downloadPitGroup);
        pitDestinationGroup->setObjectName(QString::fromUtf8("pitDestinationGroup"));
        pitDestinationGroup->setGeometry(QRect(10, 30, 441, 71));
        pitDestinationLineEdit = new QLineEdit(pitDestinationGroup);
        pitDestinationLineEdit->setObjectName(QString::fromUtf8("pitDestinationLineEdit"));
        pitDestinationLineEdit->setEnabled(false);
        pitDestinationLineEdit->setGeometry(QRect(10, 30, 311, 21));
        pitDestinationLineEdit->setReadOnly(true);
        pitSaveAsButton = new QPushButton(pitDestinationGroup);
        pitSaveAsButton->setObjectName(QString::fromUtf8("pitSaveAsButton"));
        pitSaveAsButton->setEnabled(true);
        pitSaveAsButton->setGeometry(QRect(340, 30, 91, 23));
        pitSaveAsButton->setFocusPolicy(Qt::NoFocus);
        downloadPitButton = new QPushButton(downloadPitGroup);
        downloadPitButton->setObjectName(QString::fromUtf8("downloadPitButton"));
        downloadPitButton->setEnabled(false);
        downloadPitButton->setGeometry(QRect(320, 110, 101, 23));
        downloadPitButton->setFocusPolicy(Qt::NoFocus);
        downloadPitTipLabel = new QLabel(downloadPitGroup);
        downloadPitTipLabel->setObjectName(QString::fromUtf8("downloadPitTipLabel"));
        downloadPitTipLabel->setGeometry(QRect(430, 110, 21, 23));
        downloadPitTipLabel->setFont(font);
#if QT_CONFIG(tooltip)
        downloadPitTipLabel->setToolTip(QString::fromUtf8("Download and save a device's PIT file."));
#endif // QT_CONFIG(tooltip)
        downloadPitTipLabel->setFrameShape(QFrame::Panel);
        downloadPitTipLabel->setFrameShadow(QFrame::Raised);
        downloadPitTipLabel->setLineWidth(2);
        downloadPitTipLabel->setMidLineWidth(0);
        downloadPitTipLabel->setAlignment(Qt::AlignCenter);
        outputGroup = new QGroupBox(tab);
        outputGroup->setObjectName(QString::fromUtf8("outputGroup"));
        outputGroup->setGeometry(QRect(10, 230, 751, 241));
        utilityOutputPlainTextEdit = new QPlainTextEdit(outputGroup);
        utilityOutputPlainTextEdit->setObjectName(QString::fromUtf8("utilityOutputPlainTextEdit"));
        utilityOutputPlainTextEdit->setEnabled(true);
        utilityOutputPlainTextEdit->setGeometry(QRect(10, 30, 731, 201));
        utilityOutputPlainTextEdit->setUndoRedoEnabled(false);
        utilityOutputPlainTextEdit->setReadOnly(true);
        utilityOutputPlainTextEdit->setPlainText(QString::fromUtf8(""));
        detectDeviceGroup = new QGroupBox(tab);
        detectDeviceGroup->setObjectName(QString::fromUtf8("detectDeviceGroup"));
        detectDeviceGroup->setGeometry(QRect(10, 10, 291, 61));
        detectDeviceButton = new QPushButton(detectDeviceGroup);
        detectDeviceButton->setObjectName(QString::fromUtf8("detectDeviceButton"));
        detectDeviceButton->setGeometry(QRect(170, 30, 81, 23));
        detectDeviceButton->setFocusPolicy(Qt::NoFocus);
        deviceDetectedRadioButton = new QRadioButton(detectDeviceGroup);
        deviceDetectedRadioButton->setObjectName(QString::fromUtf8("deviceDetectedRadioButton"));
        deviceDetectedRadioButton->setEnabled(false);
        deviceDetectedRadioButton->setGeometry(QRect(10, 30, 151, 21));
        deviceDetectedRadioButton->setCheckable(true);
        detectDeviceTipLabel = new QLabel(detectDeviceGroup);
        detectDeviceTipLabel->setObjectName(QString::fromUtf8("detectDeviceTipLabel"));
        detectDeviceTipLabel->setEnabled(true);
        detectDeviceTipLabel->setGeometry(QRect(260, 30, 21, 23));
        detectDeviceTipLabel->setFont(font);
#if QT_CONFIG(tooltip)
        detectDeviceTipLabel->setToolTip(QString::fromUtf8("Detect whether or not a device is connected in download mode."));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        detectDeviceTipLabel->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        detectDeviceTipLabel->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
        detectDeviceTipLabel->setFrameShape(QFrame::Panel);
        detectDeviceTipLabel->setFrameShadow(QFrame::Raised);
        detectDeviceTipLabel->setLineWidth(2);
        detectDeviceTipLabel->setMidLineWidth(0);
        detectDeviceTipLabel->setAlignment(Qt::AlignCenter);
        printPitGroup = new QGroupBox(tab);
        printPitGroup->setObjectName(QString::fromUtf8("printPitGroup"));
        printPitGroup->setGeometry(QRect(480, 10, 291, 211));
        printPitButton = new QPushButton(printPitGroup);
        printPitButton->setObjectName(QString::fromUtf8("printPitButton"));
        printPitButton->setGeometry(QRect(160, 180, 81, 23));
        printPitButton->setFocusPolicy(Qt::NoFocus);
        printPitTipLabel = new QLabel(printPitGroup);
        printPitTipLabel->setObjectName(QString::fromUtf8("printPitTipLabel"));
        printPitTipLabel->setGeometry(QRect(250, 180, 21, 23));
        printPitTipLabel->setFont(font);
#if QT_CONFIG(tooltip)
        printPitTipLabel->setToolTip(QString::fromUtf8("Print the contents of a PIT file in a human readable fashion."));
#endif // QT_CONFIG(tooltip)
        printPitTipLabel->setFrameShape(QFrame::Panel);
        printPitTipLabel->setFrameShadow(QFrame::Raised);
        printPitTipLabel->setLineWidth(2);
        printPitTipLabel->setMidLineWidth(0);
        printPitTipLabel->setAlignment(Qt::AlignCenter);
        printPitDeviceRadioBox = new QRadioButton(printPitGroup);
        printPitDeviceRadioBox->setObjectName(QString::fromUtf8("printPitDeviceRadioBox"));
        printPitDeviceRadioBox->setEnabled(true);
        printPitDeviceRadioBox->setGeometry(QRect(20, 30, 261, 21));
        printPitDeviceRadioBox->setCheckable(true);
        printPitDeviceRadioBox->setChecked(true);
        printPitLocalFileRadioBox = new QRadioButton(printPitGroup);
        printPitLocalFileRadioBox->setObjectName(QString::fromUtf8("printPitLocalFileRadioBox"));
        printPitLocalFileRadioBox->setEnabled(true);
        printPitLocalFileRadioBox->setGeometry(QRect(20, 60, 261, 21));
        printPitLocalFileRadioBox->setCheckable(true);
        printLocalPitGroup = new QGroupBox(printPitGroup);
        printLocalPitGroup->setObjectName(QString::fromUtf8("printLocalPitGroup"));
        printLocalPitGroup->setEnabled(false);
        printLocalPitGroup->setGeometry(QRect(10, 100, 271, 71));
        printLocalPitLineEdit = new QLineEdit(printLocalPitGroup);
        printLocalPitLineEdit->setObjectName(QString::fromUtf8("printLocalPitLineEdit"));
        printLocalPitLineEdit->setEnabled(false);
        printLocalPitLineEdit->setGeometry(QRect(10, 30, 171, 21));
        printLocalPitLineEdit->setReadOnly(true);
        printLocalPitBrowseButton = new QPushButton(printLocalPitGroup);
        printLocalPitBrowseButton->setObjectName(QString::fromUtf8("printLocalPitBrowseButton"));
        printLocalPitBrowseButton->setEnabled(false);
        printLocalPitBrowseButton->setGeometry(QRect(190, 30, 71, 23));
        printLocalPitBrowseButton->setFocusPolicy(Qt::NoFocus);
        closePcScreenGroup = new QGroupBox(tab);
        closePcScreenGroup->setObjectName(QString::fromUtf8("closePcScreenGroup"));
        closePcScreenGroup->setGeometry(QRect(310, 10, 161, 61));
        closePcScreenButton = new QPushButton(closePcScreenGroup);
        closePcScreenButton->setObjectName(QString::fromUtf8("closePcScreenButton"));
        closePcScreenButton->setGeometry(QRect(40, 30, 81, 23));
        closePcScreenButton->setFocusPolicy(Qt::NoFocus);
        closePcScreenTipLabel = new QLabel(closePcScreenGroup);
        closePcScreenTipLabel->setObjectName(QString::fromUtf8("closePcScreenTipLabel"));
        closePcScreenTipLabel->setGeometry(QRect(130, 30, 21, 23));
        closePcScreenTipLabel->setFont(font);
#if QT_CONFIG(tooltip)
        closePcScreenTipLabel->setToolTip(QString::fromUtf8("Close the \"device <--> PC\" screen displayed on a device."));
#endif // QT_CONFIG(tooltip)
        closePcScreenTipLabel->setFrameShape(QFrame::Panel);
        closePcScreenTipLabel->setFrameShadow(QFrame::Raised);
        closePcScreenTipLabel->setLineWidth(2);
        closePcScreenTipLabel->setMidLineWidth(0);
        closePcScreenTipLabel->setAlignment(Qt::AlignCenter);
        functionTabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 788, 22));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuDonate = new QMenu(menuBar);
        menuDonate->setObjectName(QString::fromUtf8("menuDonate"));
        menuAdvanced = new QMenu(menuBar);
        menuAdvanced->setObjectName(QString::fromUtf8("menuAdvanced"));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(functionTabWidget, firmwarePackageLineEdit);
        QWidget::setTabOrder(firmwarePackageLineEdit, browseFirmwarePackageButton);
        QWidget::setTabOrder(browseFirmwarePackageButton, firmwareNameLineEdit);
        QWidget::setTabOrder(firmwareNameLineEdit, versionLineEdit);
        QWidget::setTabOrder(versionLineEdit, platformLineEdit);
        QWidget::setTabOrder(platformLineEdit, developerNamesLineEdit);
        QWidget::setTabOrder(developerNamesLineEdit, developerHomepageButton);
        QWidget::setTabOrder(developerHomepageButton, developerDonateButton);
        QWidget::setTabOrder(developerDonateButton, supportedDevicesListWidget);
        QWidget::setTabOrder(supportedDevicesListWidget, includedFilesListWidget);
        QWidget::setTabOrder(includedFilesListWidget, repartitionRadioButton);
        QWidget::setTabOrder(repartitionRadioButton, loadFirmwareButton);
        QWidget::setTabOrder(loadFirmwareButton, pitLineEdit);
        QWidget::setTabOrder(pitLineEdit, pitBrowseButton);
        QWidget::setTabOrder(pitBrowseButton, partitionNameComboBox);
        QWidget::setTabOrder(partitionNameComboBox, partitionIdLineEdit);
        QWidget::setTabOrder(partitionIdLineEdit, partitionFileLineEdit);
        QWidget::setTabOrder(partitionFileLineEdit, partitionFileBrowseButton);
        QWidget::setTabOrder(partitionFileBrowseButton, outputPlainTextEdit);
        QWidget::setTabOrder(outputPlainTextEdit, createFirmwareNameLineEdit);
        QWidget::setTabOrder(createFirmwareNameLineEdit, createFirmwareVersionLineEdit);
        QWidget::setTabOrder(createFirmwareVersionLineEdit, createPlatformNameLineEdit);
        QWidget::setTabOrder(createPlatformNameLineEdit, createPlatformVersionLineEdit);
        QWidget::setTabOrder(createPlatformVersionLineEdit, createHomepageLineEdit);
        QWidget::setTabOrder(createHomepageLineEdit, createDonateLineEdit);
        QWidget::setTabOrder(createDonateLineEdit, createDeveloperNameLineEdit);
        QWidget::setTabOrder(createDeveloperNameLineEdit, addDeveloperButton);
        QWidget::setTabOrder(addDeveloperButton, createDevelopersListWidget);
        QWidget::setTabOrder(createDevelopersListWidget, removeDeveloperButton);
        QWidget::setTabOrder(removeDeveloperButton, createDevicesListWidget);
        QWidget::setTabOrder(createDevicesListWidget, removeDeviceButton);
        QWidget::setTabOrder(removeDeviceButton, deviceManufacturerLineEdit);
        QWidget::setTabOrder(deviceManufacturerLineEdit, deviceNameLineEdit);
        QWidget::setTabOrder(deviceNameLineEdit, deviceProductCodeLineEdit);
        QWidget::setTabOrder(deviceProductCodeLineEdit, addDeviceButton);
        QWidget::setTabOrder(addDeviceButton, buildPackageButton);

        menuBar->addAction(menuDonate->menuAction());
        menuBar->addAction(menuAdvanced->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionAboutHeimdall);
        menuDonate->addAction(actionDonate);
        menuAdvanced->addAction(actionResumeConnection);
        menuAdvanced->addSeparator();
        menuAdvanced->addAction(actionVerboseOutput);

        retranslateUi(MainWindow);

        functionTabWidget->setCurrentIndex(0);
        pitBrowseButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionHelp->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        actionAboutHeimdall->setText(QCoreApplication::translate("MainWindow", "About Heimdall", nullptr));
        actionDonate->setText(QCoreApplication::translate("MainWindow", "Donate to Glass Echidna", nullptr));
        actionPackage_Creation->setText(QCoreApplication::translate("MainWindow", "Package Creation", nullptr));
        actionVerboseOutput->setText(QCoreApplication::translate("MainWindow", "Verbose Output", nullptr));
        actionResumeConnection->setText(QCoreApplication::translate("MainWindow", "Resume Connection", nullptr));
        includedFilesGroup->setTitle(QCoreApplication::translate("MainWindow", "Package Files", nullptr));
        platformGroup->setTitle(QCoreApplication::translate("MainWindow", "Platform", nullptr));
        supportedDevicesGroup->setTitle(QCoreApplication::translate("MainWindow", "Supported Devices", nullptr));
        repartitionRadioButton->setText(QCoreApplication::translate("MainWindow", "Repartition Recommended", nullptr));
        loadFirmwareButton->setText(QCoreApplication::translate("MainWindow", "Load / Customise", nullptr));
        firmwareNameGroup->setTitle(QCoreApplication::translate("MainWindow", "Firmware Name", nullptr));
        firmwarePackageGroup->setTitle(QCoreApplication::translate("MainWindow", "Heimdall Firmware Package", nullptr));
        browseFirmwarePackageButton->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        versionGroup->setTitle(QCoreApplication::translate("MainWindow", "Version", nullptr));
        developerGroup->setTitle(QCoreApplication::translate("MainWindow", "Developer(s)", nullptr));
        developerDonateButton->setText(QCoreApplication::translate("MainWindow", "Donate", nullptr));
        developerHomepageButton->setText(QCoreApplication::translate("MainWindow", "Homepage", nullptr));
        noRebootRadioButton->setText(QCoreApplication::translate("MainWindow", "No Reboot Recommended", nullptr));
        functionTabWidget->setTabText(functionTabWidget->indexOf(loadPackageTab), QCoreApplication::translate("MainWindow", "Load Package", nullptr));
        statusGroup->setTitle(QCoreApplication::translate("MainWindow", "Status", nullptr));
        optionsGroup->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
        pitGroup->setTitle(QCoreApplication::translate("MainWindow", "PIT", nullptr));
        pitBrowseButton->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        pitBrowseTipLabel->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        repartitionCheckBox->setText(QCoreApplication::translate("MainWindow", "Repartition", nullptr));
        partitionGroup->setTitle(QCoreApplication::translate("MainWindow", "Partition Details", nullptr));
        partitionNameLabel->setText(QCoreApplication::translate("MainWindow", "Partition Name", nullptr));
        partitionIdLabel->setText(QCoreApplication::translate("MainWindow", "Partition ID", nullptr));
        partitionFileGroup->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        partitionFileBrowseButton->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        partitionsGroup->setTitle(QCoreApplication::translate("MainWindow", "Partitions (Files)", nullptr));
        addPartitionButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        removePartitionButton->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        addPartitionTipLabel->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        sessionGroup->setTitle(QCoreApplication::translate("MainWindow", "Session", nullptr));
        noRebootCheckBox->setText(QCoreApplication::translate("MainWindow", "No Reboot", nullptr));
        resumeCheckbox->setText(QCoreApplication::translate("MainWindow", "Resume (use after \"No Reboot\")", nullptr));
        startFlashButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        startFlashTipLabel->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        functionTabWidget->setTabText(functionTabWidget->indexOf(flashTab), QCoreApplication::translate("MainWindow", "Flash", nullptr));
        createSupportedDevicesGroup->setTitle(QCoreApplication::translate("MainWindow", "Supported Devices", nullptr));
        removeDeviceButton->setText(QCoreApplication::translate("MainWindow", "Remove Device", nullptr));
        createFirmwareVersionGroup->setTitle(QCoreApplication::translate("MainWindow", "Firmware Version", nullptr));
        createPlatformNameGroup->setTitle(QCoreApplication::translate("MainWindow", "Platform Name", nullptr));
        createFirmwareNameGroup->setTitle(QCoreApplication::translate("MainWindow", "Firmware Name", nullptr));
        createDevelopersGroup->setTitle(QCoreApplication::translate("MainWindow", "Developers", nullptr));
        createDeveloperInfoGroup->setTitle(QCoreApplication::translate("MainWindow", "Developer Info", nullptr));
        createDeveloperNameLabel->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        addDeveloperButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        removeDeveloperButton->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        createUrlsGroup->setTitle(QCoreApplication::translate("MainWindow", "URLs (Optional)", nullptr));
        createDonateLabel->setText(QCoreApplication::translate("MainWindow", "Donate", nullptr));
        createHomepageLabel->setText(QCoreApplication::translate("MainWindow", "Homepage", nullptr));
        createPlatformVersionGroup->setTitle(QCoreApplication::translate("MainWindow", "Platform Version", nullptr));
        createDeviceInfoGroup->setTitle(QCoreApplication::translate("MainWindow", "Device Info", nullptr));
        deviceNameLabel->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        deviceManufacturerLabel->setText(QCoreApplication::translate("MainWindow", "Manufacturer", nullptr));
        productCodeLabel->setText(QCoreApplication::translate("MainWindow", "Product Code", nullptr));
        addDeviceButton->setText(QCoreApplication::translate("MainWindow", "Add Device", nullptr));
        buildPackageButton->setText(QCoreApplication::translate("MainWindow", "Build", nullptr));
        functionTabWidget->setTabText(functionTabWidget->indexOf(createPackageTab), QCoreApplication::translate("MainWindow", "Create Package", nullptr));
        downloadPitGroup->setTitle(QCoreApplication::translate("MainWindow", "Download PIT", nullptr));
        pitDestinationGroup->setTitle(QCoreApplication::translate("MainWindow", "Destination File", nullptr));
        pitSaveAsButton->setText(QCoreApplication::translate("MainWindow", "Save As...", nullptr));
        downloadPitButton->setText(QCoreApplication::translate("MainWindow", "Download", nullptr));
        downloadPitTipLabel->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        outputGroup->setTitle(QCoreApplication::translate("MainWindow", "Output", nullptr));
        detectDeviceGroup->setTitle(QCoreApplication::translate("MainWindow", "Detect Device", nullptr));
#if QT_CONFIG(tooltip)
        detectDeviceButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        detectDeviceButton->setText(QCoreApplication::translate("MainWindow", "Detect", nullptr));
        deviceDetectedRadioButton->setText(QCoreApplication::translate("MainWindow", "Device Detected", nullptr));
        detectDeviceTipLabel->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        printPitGroup->setTitle(QCoreApplication::translate("MainWindow", "Print PIT", nullptr));
        printPitButton->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        printPitTipLabel->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        printPitDeviceRadioBox->setText(QCoreApplication::translate("MainWindow", "Device", nullptr));
        printPitLocalFileRadioBox->setText(QCoreApplication::translate("MainWindow", "Local File", nullptr));
        printLocalPitGroup->setTitle(QCoreApplication::translate("MainWindow", "PIT File", nullptr));
        printLocalPitBrowseButton->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        closePcScreenGroup->setTitle(QCoreApplication::translate("MainWindow", "Close PC Screen", nullptr));
        closePcScreenButton->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        closePcScreenTipLabel->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        functionTabWidget->setTabText(functionTabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Utilities", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuDonate->setTitle(QCoreApplication::translate("MainWindow", "Donate", nullptr));
        menuAdvanced->setTitle(QCoreApplication::translate("MainWindow", "Advanced", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
