package com.rbac.entity;

import java.util.Date;
import java.util.HashSet;
import java.util.Set;

/**
 * SysAction generated by MyEclipse Persistence Tools
 */

public class SysAction implements java.io.Serializable {

	// Fields

	private Long id;

	private String name;

	private String url;

	private Integer needCheck;

	private Integer isDeleted;

	private Long creatorId;

	private Date createTime;

	private Long modifierId;

	private Date modifyTime;

	private Set sysMenuActions = new HashSet(0);

	// Constructors

	/** default constructor */
	public SysAction() {
	}

	/** minimal constructor */
	public SysAction(Integer isDeleted) {
		this.isDeleted = isDeleted;
	}

	/** full constructor */
	public SysAction(String name, String url, Integer needCheck,
			Integer isDeleted, Long creatorId, Date createTime,
			Long modifierId, Date modifyTime, Set sysMenuActions) {
		this.name = name;
		this.url = url;
		this.needCheck = needCheck;
		this.isDeleted = isDeleted;
		this.creatorId = creatorId;
		this.createTime = createTime;
		this.modifierId = modifierId;
		this.modifyTime = modifyTime;
		this.sysMenuActions = sysMenuActions;
	}

	// Property accessors

	public Long getId() {
		return this.id;
	}

	public void setId(Long id) {
		this.id = id;
	}

	public String getName() {
		return this.name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getUrl() {
		return this.url;
	}

	public void setUrl(String url) {
		this.url = url;
	}

	public Integer getNeedCheck() {
		return this.needCheck;
	}

	public void setNeedCheck(Integer needCheck) {
		this.needCheck = needCheck;
	}

	public Integer getIsDeleted() {
		return this.isDeleted;
	}

	public void setIsDeleted(Integer isDeleted) {
		this.isDeleted = isDeleted;
	}

	public Long getCreatorId() {
		return this.creatorId;
	}

	public void setCreatorId(Long creatorId) {
		this.creatorId = creatorId;
	}

	public Date getCreateTime() {
		return this.createTime;
	}

	public void setCreateTime(Date createTime) {
		this.createTime = createTime;
	}

	public Long getModifierId() {
		return this.modifierId;
	}

	public void setModifierId(Long modifierId) {
		this.modifierId = modifierId;
	}

	public Date getModifyTime() {
		return this.modifyTime;
	}

	public void setModifyTime(Date modifyTime) {
		this.modifyTime = modifyTime;
	}

	public Set getSysMenuActions() {
		return this.sysMenuActions;
	}

	public void setSysMenuActions(Set sysMenuActions) {
		this.sysMenuActions = sysMenuActions;
	}

}